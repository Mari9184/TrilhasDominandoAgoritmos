#include <stdio.h>

int main() {

    int qtd1, qtd2, i, j;

    scanf("%d", &qtd1);
    int jog1[qtd1];
    for (i = 0; i < qtd1; i++) {
        scanf("%d", &jog1[i]);
    }

    scanf("%d", &qtd2);
    int jog2[qtd2];
    for (i = 0; i < qtd2; i++) {
        scanf("%d", &jog2[i]);
    }

    int comuns[100], qtd_comuns = 0;
    int apenas1[100], qtd_apenas1 = 0;
    int apenas2[100], qtd_apenas2 = 0;

    for (i = 0; i < qtd1; i++) {
        int achou = 0;
        for (j = 0; j < qtd2; j++) {
            if (jog1[i] == jog2[j]) {
                achou = 1;
                break;
            }
        }
        if (achou) {
            comuns[qtd_comuns++] = jog1[i];
        } else {
            apenas1[qtd_apenas1++] = jog1[i];
        }
    }

    for (i = 0; i < qtd2; i++) {
        int achou = 0;
        for (j = 0; j < qtd1; j++) {
            if (jog2[i] == jog1[j]) {
                achou = 1;
                break;
            }
        }
        if (!achou) {
            apenas2[qtd_apenas2++] = jog2[i];
        }
    }

    int trocas = (qtd_apenas1 < qtd_apenas2) ? qtd_apenas1 : qtd_apenas2;

    printf("Figurinhas em comum: ");
    for (i = 0; i < qtd_comuns; i++) {
        printf("%d", comuns[i]);
        if (i < qtd_comuns - 1) printf(", ");
    }

    printf("\nApenas jogador A: ");
    for (i = 0; i < qtd_apenas1; i++) {
        printf("%d", apenas1[i]);
        if (i < qtd_apenas1 - 1) printf(", ");
    }

    printf("\nApenas jogador B: ");
    for (i = 0; i < qtd_apenas2; i++) {
        printf("%d", apenas2[i]);
        if (i < qtd_apenas2 - 1) printf(", ");
    }

    printf("\nQuantidade de trocas possíveis: %d\n", trocas);

    return 0;
}