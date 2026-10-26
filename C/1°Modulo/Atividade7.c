// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 7 ___\n");

    char nome[50], livro[100];
    int paginas;
    float segundosPorPagina, totalHoras;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite o nome do livro: ");
    scanf(" %[^\n]", livro);

    printf("Digite o total de páginas: ");
    scanf("%d", &paginas);

    printf("Digite o tempo em segundos de leitura por página: ");
    scanf("%f", &segundosPorPagina);

    totalHoras = (paginas * segundosPorPagina) / 3600.0;

    printf("\n%s, você finalizará a leitura do livro %s em aproximadamente %.2f horas.\n", nome, livro, totalHoras);

    return 0;
}