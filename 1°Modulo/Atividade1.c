// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50], curso[25], hobby[50];
    int semestre;

    printf("\n___ Atividade 1 ___\n");
    
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nQual a seu curso? ");
    scanf("%s", curso);

    printf("\nEm qual semestre se encontra? ");
    scanf("%d", &semestre);

    printf("\nQual o seu hobby? ");
    scanf("%s", hobby);

    printf("Prazer, eu sou o(a) %s \n Atualmente estou no %d° semestre de %s,\n e meu hobby %s", nome, semestre, curso, hobby);
    
}