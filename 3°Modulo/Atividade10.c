#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do triangulo: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Triângulo inválido\n");
    } 
    else {
        printf("\n"); 
        
        for (int i = 1; i <= tamanho; i++) {
            
            for (int j = 1; j <= i; j++) {
                printf("* "); 
            }
            
            printf("\n");
        }
    }

    return 0;
}
