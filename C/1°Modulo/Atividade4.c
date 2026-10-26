// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 4 ___\n");

    
    float valorReal, valorDolar;
    const float cotacao = 5.42;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / cotacao;

    printf("Valor em real R$ %.2f.\n", valorReal);
    printf("Valor em dolar $ %.2f.\n", valorDolar);

    return 0;
}