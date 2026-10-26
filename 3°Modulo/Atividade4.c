#include <stdio.h>

int main() {
    float valor, total = 0.0;
    int parcelas;

    printf("Digite o valor dos produtos (Digite 0 para encerrar):\n");

    do {
        printf("Valor do produto: R$ ");
        scanf("%f", &valor);

        if (valor < 0) {
            printf("Valor inválido\n");
        } else {
            total += valor;
        }
    } while (valor != 0);

    printf("\nTotal da compra: R$ %.2f\n", total);

    if (total == 0) {
        printf("Nenhuma compra realizada. Saindo...\n");
        return 0;
    }

    printf("\nEm quantas vezes deseja parcelar a compra? ");
    scanf("%d", &parcelas);

    if (parcelas == 0 || parcelas == 1) {
        printf("Forma de pagamento: À vista\n");
        printf("Valor total: R$ %.2f\n", total);
    } else {
        float valor_parcela = total / parcelas;
        printf("Valor total da compra: R$ %.2f\n", total);
        printf("Parcelado em %dx de: R$ %.2f cada\n", parcelas, valor_parcela);
    }

    return 0;
}