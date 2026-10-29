#include <stdio.h>

#define MAX_MESES 100

int lerQuantidadeMeses(void) {
    int qtd;
    printf("Digite a quantidade de meses a serem analisados: ");
    scanf("%d", &qtd);
    return qtd;
}

void lerFaturamentos(float faturamentos[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Digite o faturamento do mes %d: R$ ", i + 1);
        scanf("%f", &faturamentos[i]);
    }
}

int analisarTendencia(const float faturamentos[], int qtd) {
    if (qtd <= 1) {
        return 1;
    }

    int cresceu = 0;
    int caiu = 0;

    for (int i = 1; i < qtd; i++) {
        if (faturamentos[i] > faturamentos[i - 1]) {
            cresceu = 1;
        } else if (faturamentos[i] < faturamentos[i - 1]) {
            caiu = 1;
        }
    }

    if (!cresceu && !caiu) {
        return 1;
    } else if (cresceu && !caiu) {
        return 2;
    } else if (!cresceu && caiu) {
        return 3;
    } else {
        return 4;
    }
}

void exibirResultado(const float faturamentos[], int qtd, int situacao) {
    printf("\n>> Analise de Faturamento <<\n\n");
    
    printf("Faturamento informado: ");
    for (int i = 0; i < qtd; i++) {
        printf("%.0f", faturamentos[i]);
        if (i < qtd - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Situacao: ");
    switch (situacao) {
        case 1:
            printf("Constante\n");
            break;
        case 2:
            printf("Crescimento\n");
            break;
        case 3:
            printf("Queda\n");
            break;
        case 4:
            printf("Sem padrao\n");
            break;
    }
}

int main() {
    int opcao = 0;
    float faturamentos[MAX_MESES];

    do {
        printf("___ FATURAMENTO ___\n");
        printf("1. Analisar novo periodo\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int qtd = lerQuantidadeMeses();

                if (qtd <= 0 || qtd > MAX_MESES) {
                    printf("Quantidade de meses invalida!\n");
                } else {
                    lerFaturamentos(faturamentos, qtd);
                    int situacao = analisarTendencia(faturamentos, qtd);
                    exibirResultado(faturamentos, qtd, situacao);
                }
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