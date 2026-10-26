#include <stdio.h>
#include <string.h>

int main() {

    char palavra[50];
    char tentativa;
    int i, tamanho, erros = 0, acertou_letra;
    int letras_restantes;

    scanf("%s", palavra);
    tamanho = strlen(palavra);

    char forca[tamanho + 1];
    for (i = 0; i < tamanho; i++) {
        forca[i] = '_';
    }
    forca[tamanho] = '\0';

    letras_restantes = tamanho;

    for (i = 0; i < 30; i++) {
        printf("\n");
    }

    while (erros < 7 && letras_restantes > 0) {
        scanf(" %c", &tentativa);

        acertou_letra = 0;
        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == tentativa && forca[i] == '_') {
                forca[i] = tentativa;
                letras_restantes--;
                acertou_letra = 1;
            } else if (palavra[i] == tentativa && forca[i] != '_') {
                acertou_letra = 1;
            }
        }

        if (!acertou_letra) {
            erros++;
        }

        printf("Forca: ");
        for (i = 0; i < tamanho; i++) {
            printf("%c", forca[i]);
            if (i < tamanho - 1) printf(" ");
        }
        printf("\nErros: %d\n\n", erros);
    }

    if (letras_restantes == 0) {
        printf("Parabéns! Você descobriu a palavra.\n");
    } else {
        printf("Você perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}