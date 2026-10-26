#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0.0;
    float valor;

    do {
       
        printf("\nMenu de Opcoes\n");
        printf("1. Consultar Saldo\n");
        printf("2. Realizar Deposito\n");
        printf("3. Realizar Saque\n");
        printf("0. Sair\n");
        
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);
                
                if (valor < 0) {
                    printf("Valor inválido\n");
                } else {
                    saldo += valor;
                    printf("Saldo atual: R$ %.2f\n", saldo);
                }
                break;

            case 3:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                
                if (valor < 0) {
                    printf("Valor inválido\n");
                } 
                else if (valor > saldo) {
                    printf("Saldo insuficiente\n");
                } else {
                    saldo -= valor;
                    printf("Saldo atual: R$ %.2f\n", saldo);
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
