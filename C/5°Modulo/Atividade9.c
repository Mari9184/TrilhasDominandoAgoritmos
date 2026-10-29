#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 1000

int lerOpcaoMenu(void) {
    int opcao;
    printf("\n___ Estoque ___\n");
    printf("1. Adicionar produto\n");
    printf("2. Realizar entrada no estoque\n");
    printf("3. Realizar saída no estoque\n");
    printf("4. Listar estoque\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

void lerDadosNovoProduto(char *nome, int *quantidade) {
    printf("Digite o nome do produto: ");
    scanf("%s", nome);

    printf("Digite a quantidade inicial: ");
    scanf("%d", quantidade);
}

void lerOperacaoEstoque(int *numeroProduto, int *quantidade) {
    printf("Digite o número do produto: ");
    scanf("%d", numeroProduto);

    printf("Digite a quantidade: ");
    scanf("%d", quantidade);
}

int adicionarProduto(char nomes[][50], int quantidades[], int *totalProdutos, const char *nome, int quantidade) {
    if (*totalProdutos >= MAX_PRODUTOS) {
        return 0;
    }
    strcpy(nomes[*totalProdutos], nome);
    quantidades[*totalProdutos] = quantidade;
    (*totalProdutos)++;
    return 1;
}

int realizarEntrada(int quantidades[], int totalProdutos, int indiceProduto, int quantidade) {
    if (indiceProduto < 0 || indiceProduto >= totalProdutos) {
        return -1;
    }
    quantidades[indiceProduto] += quantidade;
    return 1;
}

int realizarSaida(int quantidades[], int totalProdutos, int indiceProduto, int quantidade) {
    if (indiceProduto < 0 || indiceProduto >= totalProdutos) {
        return -1;
    }
    if (quantidade > quantidades[indiceProduto]) {
        return 0;
    }
    quantidades[indiceProduto] -= quantidade;
    return 1;
}

void exibirEstoque(char nomes[][50], int quantidades[], int totalProdutos) {
    if (totalProdutos == 0) {
        printf("\nNenhum produto cadastrado no estoque.\n");
        return;
    }

    printf("\nEstoque atual:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("Produto %d: %s - %d unidades\n", i + 1, nomes[i], quantidades[i]);
    }
}

void exibirMensagem(const char *mensagem) {
    printf("%s\n", mensagem);
}

int main() {
    char nomes[MAX_PRODUTOS][50];
    int quantidades[MAX_PRODUTOS];
    int totalProdutos = 0;
    int opcao;

    do {
        opcao = lerOpcaoMenu();

        switch (opcao) {
            case 1: {
                if (totalProdutos >= MAX_PRODUTOS) {
                    exibirMensagem("Limite de 1000 produtos atingido!");
                } else {
                    char nome[50];
                    int qtd;
                    lerDadosNovoProduto(nome, &qtd);
                    if (adicionarProduto(nomes, quantidades, &totalProdutos, nome, qtd)) {
                        exibirMensagem("Produto adicionado com sucesso!");
                    }
                }
                break;
            }

            case 2: { 
                if (totalProdutos == 0) {
                    exibirMensagem("Nenhum produto cadastrado.");
                } else {
                    int numProd, qtd;
                    lerOperacaoEstoque(&numProd, &qtd);
                    int status = realizarEntrada(quantidades, totalProdutos, numProd - 1, qtd);
                    
                    if (status == 1) {
                        exibirMensagem("Entrada realizada com sucesso!");
                    } else {
                        exibirMensagem("Produto inválido!");
                    }
                }
                break;
            }

            case 3: {
                if (totalProdutos == 0) {
                    exibirMensagem("Nenhum produto cadastrado.");
                } else {
                    int numProd, qtd;
                    lerOperacaoEstoque(&numProd, &qtd);
                    int status = realizarSaida(quantidades, totalProdutos, numProd - 1, qtd);
                    
                    if (status == 1) {
                        exibirMensagem("Saída realizada com sucesso!");
                    } else if (status == 0) {
                        exibirMensagem("Quantidade indisponível em estoque!");
                    } else {
                        exibirMensagem("Produto inválido!");
                    }
                }
                break;
            }

            case 4:
                exibirEstoque(nomes, quantidades, totalProdutos);
                break;

            case 0:
                exibirMensagem("Encerrando o programa...");
                break;

            default:
                exibirMensagem("Opção inválida!");
                break;
        }

    } while (opcao != 0);

    return 0;
}