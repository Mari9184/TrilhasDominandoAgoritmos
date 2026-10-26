#include <stdio.h>

int main() {

    int qtd, i;
    int eh_crescimento = 1;
    int eh_queda = 1;
    int eh_constante = 1;

    printf("Quantos Meses: ");
    scanf("%d", &qtd);

    float faturamento[qtd];

    for (i = 0; i < qtd; i++) {
        printf("%d° mês:", i+1);
        scanf("%f", &faturamento[i]);
    }

    for (i = 1; i < qtd; i++) {
        if (faturamento[i] < faturamento[i - 1]) {
            eh_crescimento = 0;
        }
        if (faturamento[i] > faturamento[i - 1]) {
            eh_queda = 0;
        }
        if (faturamento[i] != faturamento[i - 1]) {
            eh_constante = 0;
        }
    }

    printf(">> Análise de Faturamento <<\n");
    printf("Faturamento informado: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", faturamento[i]);
        if (i < qtd - 1) {
            printf(", ");
        }
    }
    printf("\n");

    if (eh_constante) {
        printf("Situação: Constante\n");
    } else if (eh_crescimento) {
        printf("Situação: Crescimento\n");
    } else if (eh_queda) {
        printf("Situação: Queda\n");
    } else {
        printf("Situação: Sem padrão\n");
    }

    return 0;
}