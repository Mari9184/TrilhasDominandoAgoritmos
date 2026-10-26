#include <stdio.h>

int main() {
    float gramas, total;

    printf("Digite o peso em gramas: ");
    scanf("%f", &gramas);

    if (gramas <= 0) {
        printf("Peso Invalido\n");
    } else {
        if (gramas >= 1000) {
            total = (gramas / 100) * 3.00;
        } else {
            total = (gramas / 100) * 3.50;
        }

        printf("Total a pagar: R$ %.2f\n", total);
    }

    return 0;
}
