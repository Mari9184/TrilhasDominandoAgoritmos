#include <stdio.h>

int main() {
    int cor1, cor2;

    printf("--- Misturador de Cores Primarias ---\n");
    printf("Escolha as cores pelo numero:\n");
    printf("1 - Vermelho\n");
    printf("2 - Azul\n");
    printf("3 - Amarelo\n\n");

    printf("Digite o numero da primeira cor: ");
    scanf("%d", &cor1);
    printf("Digite o numero da segunda cor: ");
    scanf("%d", &cor2);

    if (cor1 < 1 || cor1 > 3 || cor2 < 1 || cor2 > 3) {
        printf("\nErro: Apenas cores primarias sao aceitas.\n");
        return 0; 
    }

    if (cor1 == cor2) {
        switch (cor1) {
            case 1: printf("\nResultado: Vermelho\n"); break;
            case 2: printf("\nResultado: Azul\n"); break;
            case 3: printf("\nResultado: Amarelo\n"); break;
        }
        return 0;
    }

    switch (cor1) {
        case 1: 
            switch (cor2) {
                case 2: printf("\nResultado: Roxo\n"); break;
                case 3: printf("\nResultado: Laranja\n"); break;
            }
            break;

        case 2:
            switch (cor2) {
                case 1: printf("\nResultado: Roxo\n"); break;
                case 3: printf("\nResultado: Verde\n"); break;
            }
            break;

        case 3:
            switch (cor2) {
                case 1: printf("\nResultado: Laranja\n"); break;
                case 2: printf("\nResultado: Verde\n"); break;
            }
            break;
    }

    return 0;
}
