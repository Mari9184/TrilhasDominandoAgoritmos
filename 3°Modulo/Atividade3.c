#include <stdio.h>

int main() {
    int temp, maior=-51, menor=61;

    printf("Digite o valor dos produtos (Digite 0 para encerrar):\n");

    do {
        printf("Temperatura: (Digite 100 para encerrar) ");// fiz esta alteração pois 0 pode ser um grau de teperatura

        scanf("%d", &temp);

        if (temp < -50 || temp > 60) {
            printf("Valor inválido\n");

        } 
        else{
             if( temp > maior) {
                maior = temp;
            }
             if (temp < maior){
                menor = temp;}
        }
    } while (temp != 100);

    printf("Maior temperatura: %d", maior);

    printf("Menor temperatura: %d", menor);

    return 0;
}