// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 8 ___\n");

     int qtd_p, qtd_m, qtd_g;
    float cupom, subtotal, total_final;

    printf("Digite a quantidade de Açaí P: ");
    scanf("%d", &qtd_p);

    printf("Digite a quantidade de Açaí M: ");
    scanf("%d", &qtd_m);

    printf("Digite a quantidade de Açaí G: ");
    scanf("%d", &qtd_g);

    printf("Digite a porcentagem do cupom de desconto: ");
    scanf("%f", &cupom);

    subtotal = (qtd_p * 13.50) + (qtd_m * 15.00) + (qtd_g * 17.50);
    total_final = subtotal - (subtotal * (cupom / 100.0));

    printf("\nSeu pedido foi registrado.\n");
    printf("- Açaí P: %d\n", qtd_p);
    printf("- Açaí M: %d\n", qtd_m);
    printf("- Açaí G: %d\n\n", qtd_g);
    printf("Desconto de %.0f%% aplicado.\n", cupom);
    printf("Total R$ %.2f\n", total_final);

    return 0;
}