#include <stdio.h>
#include <string.h>
#define MAX_PRODUTOS 1000
#define TAM_NOME 100

int main() {
    char nomes[MAX_PRODUTOS][TAM_NOME];
    int quantidades[MAX_PRODUTOS];
    
    int total_produtos = 0;
    int opcao;

    do {
        printf("\nMenu de Opcoes\n");
        printf("1. Adicionar produto\n");
        printf("2. Realizar entrada no estoque\n");
        printf("3. Realizar saida no estoque\n");
        printf("4. Listar estoque\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (total_produtos >= MAX_PRODUTOS) {
                    printf("Limite de produtos atingido!\n");
                } else {
                    printf("Nome do produto: ");
                    scanf(" %[^\n]", nomes[total_produtos]); 

                    printf("Quantidade inicial: ");
                    scanf("%d", &quantidades[total_produtos]);

                    total_produtos++;
                    printf("Produto adicionado com sucesso!\n");
                }
                break;

            case 2:
                if (total_produtos == 0) {
                    printf("Nenhum produto cadastrado!\n");
                } else {
                    int num_produto, qtd_adicionar;
                    printf("Numero do produto: ");
                    scanf("%d", &num_produto);

                    if (num_produto < 1 || num_produto > total_produtos) {
                        printf("Produto invalido!\n");
                    } else {
                        printf("Quantidade a adicionar: ");
                        scanf("%d", &qtd_adicionar);

                        quantidades[num_produto - 1] += qtd_adicionar;
                        printf("Entrada realizada com sucesso!\n");
                    }
                }
                break;

            case 3:
                if (total_produtos == 0) {
                    printf("Nenhum produto cadastrado!\n");
                } else {
                    int num_produto, qtd_retirar;
                    printf("Numero do produto: ");
                    scanf("%d", &num_produto);

                    if (num_produto < 1 || num_produto > total_produtos) {
                        printf("Produto invalido!\n");
                    } else {
                        printf("Quantidade a retirar: ");
                        scanf("%d", &qtd_retirar);

                        if (qtd_retirar > quantidades[num_produto - 1]) {
                            printf("Quantidade indisponivel em estoque!\n");
                        } else {
                            quantidades[num_produto - 1] -= qtd_retirar;
                            printf("Saida realizada com sucesso!\n");
                        }
                    }
                }
                break;

            case 4:
                if (total_produtos == 0) {
                    printf("Nenhum produto cadastrado!\n");
                } else {
                    printf("\nEstoque atual:\n");
                    for (int i = 0; i < total_produtos; i++) {
                        printf("Produto %d: %s - %d unidades\n", i + 1, nomes[i], quantidades[i]);
                    }
                }
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}