#include <stdio.h>

int main() {
    int num;
    long long fatorial = 1; 

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Parâmetro inválido\n");
    } 
    else {
      
        for (int i = num; i > 1; i--)
        {
            fatorial *= i; 
        }
        
    
        printf("O fatorial de %d é: %lld \n", num, fatorial);
    }
        
    return 0;
}
