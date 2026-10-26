#include <stdio.h>

int main() {

    int dias, i, j;
    int dia_maior = 1, dia_menor = 1;
    float maior, menor;

    printf("Quantos dias: ");
    scanf("%d", &dias);

    float pesos[dias];

    for (i = 0; i < dias; i++) {
        printf("%d° peso: ", i+1);
        scanf("%f", &pesos[i]);
    }

    maior = pesos[0];
    menor = pesos[0];

    for (i = 1; i < dias; i++) {
        if (pesos[i] > maior) {
            maior = pesos[i];
            dia_maior = i + 1;
        }
        if (pesos[i] < menor) {
            menor = pesos[i];
            dia_menor = i + 1;
        }
    }

    printf("Pesos informados: ");
    for (i = 0; i < dias; i++) {
        printf("%.0f", pesos[i]);
        if (i < dias - 1) printf(", ");
    }
    printf("\n\n");

    printf("Maior peso: %.0f kg (Dia %d)\n", maior, dia_maior);
    printf("Menor peso: %.0f kg (Dia %d)\n\n", menor, dia_menor);

    printf("Gráfico de evolução:\n");
    for (i = 0; i < dias; i++) {
        int blocos = (int)(pesos[i] / 5);
        printf("Dia %d | ", i + 1);
        for (j = 0; j < blocos; j++) {
            printf("■");
        }
        printf(" %.0f\n", pesos[i]);
    }

    return 0;
}