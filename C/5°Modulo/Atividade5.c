#include <stdio.h>
#include <string.h>
#include <ctype.h>

void paraMaiusculas(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

void lerDados(char *sigla, char *isento, float *desconto) {
    printf("Digite a sigla do curso (SI, ADS, CS, EC, ES): ");
    scanf("%s", sigla);

    printf("O aluno e isento? (sim ou nao): ");
    scanf("%s", isento);

    printf("Digite a porcentagem de desconto (%%): ");
    scanf("%f", desconto);

    paraMaiusculas(sigla);
    paraMaiusculas(isento);
}

float obterValorBase(const char *sigla) {
    int tam = strlen(sigla);
    if (tam < 2 || tam > 3) return -1.0;

    int codigo;
    if (tam == 2) {
        codigo = sigla[0] * 100 + sigla[1];
    } else { 
        codigo = sigla[0] * 10000 + sigla[1] * 100 + sigla[2];
    }

    switch (codigo) {
        case 'S' * 100 + 'I':
            return 900.00;

        case 'A' * 10000 + 'D' * 100 + 'S':
            return 750.00;

        case 'C' * 100 + 'S':
            return 1150.00;

        case 'E' * 100 + 'C':
            return 1300.00;

        case 'E' * 100 + 'S':
            return 950.00;

        default:
            return -1.0;
    }
}

float calcularMensalidade(float valorBase, const char *isento, float desconto) {
    if (strcmp(isento, "SIM") == 0) {
        return 0.0;
    }

    float valorFinal = valorBase * (1.0 - (desconto / 100.0));
    return valorFinal;
}

void exibirResultado(float valorBase, float valorFinal) {
    if (valorBase < 0) {
        printf("\nCurso não encontrado\n");
    } else {
        printf("\nValor da mensalidade:\nR$ %.2f\n", valorFinal);
    }
}

int main() {
    int opcao = 0;
    char sigla[10];
    char isento[10];
    float desconto;

    do {
        printf("___SISTEMA DE MENSALIDADES__\n");
        printf("1. Calcular Mensalidade\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                lerDados(sigla, isento, &desconto);

                float valorBase = obterValorBase(sigla);
                float valorFinal = calcularMensalidade(valorBase, isento, desconto);

                exibirResultado(valorBase, valorFinal);
                break;
            }
            case 2:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 2);

    return 0;
}