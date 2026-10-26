#include <stdio.h>

int main() {
    int base, altura;

    printf("Digite a largura da base: ");
    scanf("%d", &base);
    printf("Digite a altura: ");
    scanf("%d", &altura);

    if (base <= 0 || altura <= 0) {
        printf("Retângulo inválido\n");
    } 
    else {
        printf("\n"); 
        
        for (int i = 0; i < altura; i++) {
            
            for (int j = 0; j < base; j++) {
                printf("* "); 
            }
            printf("\n");
        }
    }

    return 0;
}
