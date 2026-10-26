#include <stdio.h>
#include <string.h>

int main() {
    int qte_inteiras, qte_meias;
    char dia_semana[30];
    char nacional[4];
    float preco_inteira, preco_meia, total;

    printf("Quantidade de ingressos inteiras: ");
    scanf("%d", &qte_inteiras);

    printf("Quantidade de ingressos meias: ");
    scanf("%d", &qte_meias);

    printf("Dia da semana: ");
    scanf(" %s", dia_semana); 

    printf("O filme e nacional? (sim/nao): ");
    scanf("%s", nacional);

    if (strcmp(nacional, "sim") == 0 || strcmp(nacional, "Sim") == 0) {
        preco_inteira = 5.00;
        preco_meia = 5.00;
    } 
    else if (strcmp(dia_semana, "quarta-feira") == 0 || strcmp(dia_semana, "quarta") == 0) {
        preco_inteira = 14.50;
        preco_meia = 14.50;
    } 
    else {
        preco_inteira = 28.50;
        preco_meia = 28.50 / 2.0;
    }

    total = (qte_inteiras * preco_inteira) + (qte_meias * preco_meia);

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
