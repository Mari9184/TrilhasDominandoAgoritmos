// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 6 ___\n");


    char nome[50];
    float peso, altura, imc;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    printf("\nDigite a seu peso: ");
    scanf("%f", &peso);


    imc = peso / (altura * altura);

    printf("%s, seu IMC é de %.4f\n", nome, imc);
    return 0;
}