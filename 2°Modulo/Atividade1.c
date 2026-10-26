#include <stdio.h>

int main() {
float ganhos;
float gastos;
const char* orcamento;

printf("Quanto você ganha? ");
scanf("%f", &ganhos);
printf("Quanto você gasta? ");
scanf("%f", &gastos);

orcamento = (ganhos< gastos) ? "Você está fora do orçamento!\nNão gaste mais!" : "Você está dentro do orçamento!" ;

printf("%s\n", orcamento);

return 0;}
