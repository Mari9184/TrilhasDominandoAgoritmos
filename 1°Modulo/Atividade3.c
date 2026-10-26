// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 3 ___\n");
    
    char nome[50];
    float n1, n2, n3, media;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("\nDigite a 1° nota:");
    scanf("%f", &n1);

    printf("\nDigite a 2° nota:");
    scanf("%f", &n2);

    printf("\nDigite a 3° nota:");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("\nO(a) estudante %s ficou com média %.1f\n", nome, media);
    
    return 0;
}