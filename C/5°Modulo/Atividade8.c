#include <stdio.h>

int lerOpcaoMenu(void) {
    int opcao;
    printf("\n___ Opções ___\n");
    printf("1. Consultar Saldo\n");
    printf("2. Realizar Depósito\n");
    printf("3. Realizar Saque\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

float lerValorOperacao(const char *tipo) {
    float valor;
    printf("Digite o valor para %s: R$ ", tipo);
    scanf("%f", &valor);
    return valor;
}

float realizarDeposito(float saldoAtual, float valor) {
    return saldoAtual + valor;
}

float realizarSaque(float saldoAtual, float valor) {
    return saldoAtual - valor;
}

void exibirSaldo(float saldo) {
    printf("Saldo atual: R$ %.0f\n", saldo);
}

void exibirMensagem(const char *mensagem) {
    printf("%s\n", mensagem);
}

int main() {
    float saldo = 0.0;
    int opcao;

    do {
        opcao = lerOpcaoMenu();

        switch (opcao) {
            case 1:
                exibirSaldo(saldo);
                break;

            case 2: {
                float valor = lerValorOperacao("depósito");
                if (valor < 0) {
                    exibirMensagem("Valor inválido");
                } else {
                    saldo = realizarDeposito(saldo, valor);
                    exibirSaldo(saldo);
                }
                break;
            }

            case 3: {
                float valor = lerValorOperacao("saque");
                if (valor < 0) {
                    exibirMensagem("Valor inválido");
                } else if (valor > saldo) {
                    exibirMensagem("Saldo insuficiente");
                } else {
                    saldo = realizarSaque(saldo, valor);
                    exibirSaldo(saldo);
                }
                break;
            }

            case 0:
                break;

            default:
                exibirMensagem("Opção inválida");
                break;
        }

    } while (opcao != 0);

    return 0;
}