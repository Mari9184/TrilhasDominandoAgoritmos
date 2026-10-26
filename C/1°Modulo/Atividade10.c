// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 10 ___\n");

      char meta[100];
    float valorMeta, salario, despesas;
    float saldo, reservaFixa, valorDisponivel, prazoMeses;

    printf("Descrição da meta: ");
    scanf(" %[^\n]", meta);

    printf("Valor necessário: ");
    scanf("%f", &valorMeta);

    printf("Salário mensal: ");
    scanf("%f", &salario);

    printf("Total das despesas: ");
    scanf("%f", &despesas);

    saldo = salario - despesas;
    reservaFixa = saldo * 0.30;
    valorDisponivel = saldo - reservaFixa;
    prazoMeses = valorMeta / valorDisponivel;

    printf("\nMeta: %s (R$ %.2f)\n", meta, valorMeta);
    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n\n", salario, despesas);
    printf("Saldo após despesas: R$ %.2f\n", saldo);
    printf("Reserva fixa (30%%): R$ %.2f\n", reservaFixa);
    printf("Valor disponível para a meta: R$ %.2f por mês\n", valorDisponivel);
    printf("Prazo estimado para atingir a meta: %.2f meses\n", prazoMeses);

    return 0;
}