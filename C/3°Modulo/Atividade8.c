#include <stdio.h>

int main() {
    int entrada, posicao;
    
    printf("Digite a entrada: ");
    scanf("%d", &entrada);

    posicao = entrada - 1;

    if (posicao < 0) {
        printf("Posicao invalida!\n");
        return 1;
    }

    if (posicao == 0 || posicao == 1) {
        printf("O valor na posicao %d da sequencia de Fibonacci e 1\n", posicao);
    } 
    else {
        long long termo1 = 1;
        long long termo2 = 1;
        long long proximo = 0;

        for (int i = 2; i <= posicao; i++) {
            proximo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proximo;
        }

        printf("O valor na posicao %d da sequencia de Fibonacci e %lld\n", posicao, proximo);
    }

    return 0;
}
