#include <stdio.h>

#define PRECO_P 13.50
#define PRECO_M 15.00
#define PRECO_G 17.50

void lerDados(int *qtdP, int *qtdM, int *qtdG, float *desconto) {
    printf("Quantos P: ");
    scanf("%d", qtdP);

    printf("\nQuantos M: ");
    scanf("%d", qtdM);

    printf("\nQuantos G: ");
    scanf("%d", qtdG);

    printf("\nDesconto: ");
    scanf("%f", desconto);
}

float calcularTotal(int qtdP, int qtdM, int qtdG, float desconto) {
    float subtotal = (qtdP * PRECO_P) + (qtdM * PRECO_M) + (qtdG * PRECO_G);
    return subtotal * (1.0 - (desconto / 100.0));
}

void exibirResultado(int qtdP, int qtdM, int qtdG, float desconto, float total) {
    printf("Seu pedido foi registrado.\n");
    printf("- Açaí P: %d\n", qtdP);
    printf("- Açaí M: %d\n", qtdM);
    printf("- Açaí G: %d\n\n", qtdG);
    printf("Desconto de %.0f%% aplicado.\n", desconto);
    printf("Total R$ %.2f\n", total);
}

int main() {
    int qtdP, qtdM, qtdG;
    float desconto, total;

    lerDados(&qtdP, &qtdM, &qtdG, &desconto);
    total = calcularTotal(qtdP, qtdM, qtdG, desconto);
    exibirResultado(qtdP, qtdM, qtdG, desconto, total);

    return 0;
}