#include <stdio.h>
#include <string.h>
#include <ctype.h>

void paraMinusculas(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

void lerDados(int *inteiras, int *meias, char *diaSemana, char *nacional) {
    printf("Digite a quantidade de ingressos inteiras: ");
    scanf("%d", inteiras);

    printf("Digite a quantidade de ingressos meias: ");
    scanf("%d", meias);

    printf("Digite o dia da semana (ex: Quarta-feira, Sabado): ");
    scanf("%s", diaSemana);

    printf("O filme e nacional? (sim ou nao): ");
    scanf("%s", nacional);

    paraMinusculas(diaSemana);
    paraMinusculas(nacional);
}

float calcularTotal(int inteiras, int meias, const char *diaSemana, const char *nacional) {
    float total = 0.0;

    if (strcmp(nacional, "sim") == 0) {
        total = (inteiras + meias) * 5.00;
    }
    else if (strstr(diaSemana, "quarta") != NULL) {
        total = (inteiras + meias) * 14.50;
    }
    else {
        total = (inteiras * 28.50) + (meias * (28.50 / 2.0));
    }

    return total;
}

void exibirResultado(float total) {
    printf("\nTotal a pagar:\nR$ %.2f\n", total);
}

int main() {
    int opcao = 0;
    int inteiras, meias;
    char diaSemana[30];
    char nacional[10];

    do {
        printf("___ COMPRA DE INGRESSOS ___\n");
        printf("1. Calcular Ingressos\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                lerDados(&inteiras, &meias, diaSemana, nacional);
                float total = calcularTotal(inteiras, meias, diaSemana, nacional);
                exibirResultado(total);
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