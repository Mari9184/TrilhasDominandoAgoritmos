#include <stdio.h>
#include <string.h>

void lerDados(char *descricao, float *valorMeta, float *salario, float *despesas) {

    printf("Qual é o item? ");
    fgets(descricao, 100, stdin);

    printf("Qual é o Valor da meta? ");
    scanf("%f", valorMeta);

    printf("Qual é o Valor do salario? ");
    scanf("%f", salario);

    printf("Qual é o Valor das despesas? ");
    scanf("%f", despesas);
}

void calcularMeta(float valorMeta, float salario, float despesas, 
    float *saldo, float *reserva, float *valorDisponivel, float *prazoMeses) {
    *saldo = salario - despesas;
    *reserva = *saldo * 0.30;
    *valorDisponivel = *saldo - *reserva;
    *prazoMeses = valorMeta / *valorDisponivel;
}

void exibirResultado(char *descricao, float valorMeta, float salario, float despesas, 
                     float saldo, float reserva, float valorDisponivel, float prazoMeses) {
    printf("Meta: %s (R$ %.2f)\n", descricao, valorMeta);
    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n\n", salario, despesas);
    printf("Saldo após despesas: R$ %.2f\n", saldo);
    printf("Reserva fixa (30%%): R$ %.2f\n", reserva);
    printf("Valor disponível para a meta: R$ %.2f por mês\n", valorDisponivel);
    printf("Prazo estimado para atingir a meta: %.2f meses\n", prazoMeses);
}

int main() {
    char descricao[100];
    float valorMeta, salario, despesas;
    float saldo, reserva, valorDisponivel, prazoMeses;

    lerDados(descricao, &valorMeta, &salario, &despesas);
    calcularMeta(valorMeta, salario, despesas, &saldo, &reserva, &valorDisponivel, &prazoMeses);
    exibirResultado(descricao, valorMeta, salario, despesas, saldo, reserva, valorDisponivel, prazoMeses);

    return 0;
}