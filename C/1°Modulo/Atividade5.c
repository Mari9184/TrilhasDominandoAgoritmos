// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 5 ___\n");

    char nome[50];
    float valorCompra, cupom, totalFinal;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Qual o valor da compra? ");
    scanf("%f", &valorCompra);

    printf("Qual é o valor so seu cupom?");
    scanf("%f", &cupom);

    totalFinal = valorCompra - (valorCompra * (cupom / 100.0));

    printf("\nOlá %s, sua compra de R$ %.2f foi confirmada!\n", nome, valorCompra);
    printf("Foi aplicado um desconto de %.2f%%.\n", cupom); // %% coloca o simbulo de porcento
    printf("O total final ficou em R$ %.2f\n", totalFinal);

    return 0;
}