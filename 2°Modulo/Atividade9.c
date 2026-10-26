#include <stdio.h>
#include <string.h>

int main() {
    char curso[10];
    char isento[5];
    float desconto;
    float valor_base = 0.0;
    float valor_final;
    int curso_valido = 1;

    printf("Digite a sigla do curso: ");
    scanf("%s", curso);

    printf("E isento? (Sim/Nao): ");
    scanf("%s", isento);

    printf("Digite o desconto (em %%): ");
    scanf("%f", &desconto);

    if (strcmp(curso, "SI") == 0) {
        valor_base = 900.00;
    } else if (strcmp(curso, "ADS") == 0) {
        valor_base = 750.00;
    } else if (strcmp(curso, "CS") == 0) {
        valor_base = 1150.00;
    } else if (strcmp(curso, "EC") == 0) {
        valor_base = 1300.00;
    } else if (strcmp(curso, "ES") == 0) {
        valor_base = 950.00;
    } else {
        curso_valido = 0; 
    }

    if (!curso_valido) {
        printf("Curso nao encontrado\n");
    } else {
        if (strcmp(isento, "Sim") == 0 || strcmp(isento, "sim") == 0 || strcmp(isento, "SI") == 0) {
            valor_final = 0.00;
        } else {
            valor_final = valor_base * (1.0 - (desconto / 100.0));
        }
        printf("Valor da mensalidade:\nR$ %.2f\n", valor_final);
    }

    return 0;
}
