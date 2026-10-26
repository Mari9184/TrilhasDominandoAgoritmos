#include <stdio.h>

int main() {

    int qtd, i;
    int mais_barato_a = 0, mais_barato_b = 0, mesmo_preco = 0;
    float total_a = 0.0, total_b = 0.0;

    printf("Quantos remedios: ");
    scanf("%d", &qtd);

    float farmacia_a[qtd];
    float farmacia_b[qtd];

    printf("\n Farmacia A");
    for (i = 0; i < qtd; i++) {
        printf("%d° remedio:", i+1);
        scanf("%f", &farmacia_a[i]);
        total_a += farmacia_a[i];
    }

    printf("\n Farmacia B");
    for (i = 0; i < qtd; i++) {
        printf("%d° remedio:", i+1);
        scanf("%f", &farmacia_b[i]);
        total_b += farmacia_b[i];
    }

    for (i = 0; i < qtd; i++) {
        if (farmacia_a[i] < farmacia_b[i]) {
            mais_barato_a++;
        } else if (farmacia_b[i] < farmacia_a[i]) {
            mais_barato_b++;
        } else {
            mesmo_preco++;
        }
    }

    printf("FARMAZOOM\n");
    printf("Farmácia A: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", farmacia_a[i]);
        if (i < qtd - 1) printf(", ");
    }
    printf("\nFarmácia B: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", farmacia_b[i]);
        if (i < qtd - 1) printf(", ");
    }
    printf("\n\n");

    printf("Produtos mais Baratos\n");
    printf("Na Farmácia A: %d\n", mais_barato_a);
    printf("Na Farmácia B: %d\n", mais_barato_b);
    printf("Mesmo preço: %d\n\n", mesmo_preco);

    printf("Total\n");
    printf("Farmácia A: R$ %.0f\n", total_a);
    printf("Farmácia B: R$ %.0f\n\n", total_b);

    printf("Melhor opção\n");
    if (total_a < total_b) {
        printf("Farmácia A\n");
    } else if (total_b < total_a) {
        printf("Farmácia B\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}