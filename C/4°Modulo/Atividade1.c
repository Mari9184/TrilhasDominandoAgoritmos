#include <stdio.h>

int main() {

    int qtd, i;
    int aprovados = 0, reprovados = 0;
    float soma = 0.0, media;
    float maior, menor;

    printf("Quantas notas são?");
    scanf("%d", &qtd);

    float notas[qtd];

    for (i = 0; i < qtd; i++) {
        printf("%d° nota:",i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];

        if (notas[i] >= 6.0) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    media = soma / qtd;
    maior = notas[0];
    menor = notas[0];

    for (i = 1; i < qtd; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    printf(">> Resultado da Turma <<\n");
    printf("Notas informadas: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", notas[i]);
        if (i < qtd - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("☑ Média da turma: %.0f\n", media);
    printf("☑ Maior nota: %.0f\n", maior);
    printf("☑ Menor nota: %.0f\n", menor);
    printf("☑ Aprovados: %d\n", aprovados);
    printf("☑ Reprovados: %d\n", reprovados);

    if (reprovados == 0) {
        printf("Situação geral: Todos os alunos foram aprovados\n");
    } else {
        printf("Situação geral: Nem todos os alunos foram aprovados\n");
    }

    return 0;
}