#include <stdio.h>

float coletarProdutos(void) {
    float valor = 0.0;
    float total = 0.0;

    printf("\n--- Entrada de Produtos ---\n");
    printf("Digite os valores das compras (digite 0 para encerrar):\n");

    do {
        printf("Valor do produto: R$ ");
        scanf("%f", &valor);

        if (valor < 0) {
            printf("Valor inválido: %.0f\n", valor);
        } else {
            total += valor;
        }
    } while (valor != 0);

    return total;
}

int lerParcelas(void) {
    int parcelas;
    printf("\nEm quantas vezes deseja parcelar a compra? ");
    scanf("%d", &parcelas);
    return parcelas;
}

float calcularParcela(float total, int parcelas) {
    if (parcelas > 1) {
        return total / parcelas;
    }
    return total; 
}

void exibirResultado(float total, int parcelas, float valorParcela) {
    printf("\n--- Resumo do Pagamento ---\n");
    if (parcelas == 0 || parcelas == 1) {
        printf("Pagamento à vista: R$ %.2f\n", total);
    } else if (parcelas > 1) {
        printf("Total da compra: R$ %.2f\n", total);
        printf("Parcelado em %dx de R$ %.2f\n", parcelas, valorParcela);
    } else {
        printf("Quantidade de parcelas inválida.\n");
    }
}

int main() {
    int opcao = 0;

    do {
        printf("___ CAIXA DE MERCADO ___\n");
        printf("1. Iniciar Nova Compra\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                float total = coletarProdutos();

                if (total > 0) {
                    int parcelas = lerParcelas();
                    float valorParcela = calcularParcela(total, parcelas);
                    exibirResultado(total, parcelas, valorParcela);
                } else {
                    printf("\nNenhum produto cadastrado. Compra cancelada.\n");
                }
                break;
            }
            case 2:
                printf("\nEncerrando o sistema...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 2);

    return 0;
}