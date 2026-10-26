#include <stdio.h>

int main() {

    char projeto[100];
    int qtd, i;
    float meta, total = 0.0, maior;

    printf("Nome do projeto: ");
    scanf(" %[^\n]", projeto);

    printf("Quantidade de doações");
    scanf("%d", &qtd);

    printf("Meta a ser atingida:");
    scanf("%f", &meta);

    float doacoes[qtd];

    for (i = 0; i < qtd; i++) {
        printf("%d° Doação", i+1),
        scanf("%f", &doacoes[i]);
        total += doacoes[i];
    }

    maior = doacoes[0];
    for (i = 1; i < qtd; i++) {
        if (doacoes[i] > maior) {
            maior = doacoes[i];
        }
    }

    printf(">> Resumo das Doações <<\n");
    printf("Projeto: %s\n", projeto);
    printf("Doações recebidas: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", doacoes[i]);
        if (i < qtd - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("\nTotal arrecadado: %.0f\n", total);
    printf("\nMaior doação: %.0f\n", maior);

    if (total >= meta) {
        printf("Situação: Meta atingida\n");
    } else {
        printf("Situação: Meta não atingida\n");
    }

    return 0;
}