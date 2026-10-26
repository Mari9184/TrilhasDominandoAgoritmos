#include <stdio.h>
#define MAX_OP 1000

int main() {

    float transacoes[MAX_OP];
    int topo = 0;
    float valor;
    float saldo = 0.0;
    int i;

    while (1) {
        scanf("%f", &valor);

        if (valor == -1) {
            break;
        }

        if (valor == 0) {
            if (topo > 0) {
                topo--;
            }
        } else {
            if (topo < MAX_OP) {
                transacoes[topo] = valor;
                topo++;
            }
        }
    }

    for (i = 0; i < topo; i++) {
        saldo += transacoes[i];
    }

    printf("Saldo final: %.0f\n", saldo);

    return 0;
}