// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 2 ___\n");
    
    int quantidade_pessoas;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &quantidade_pessoas);

    float precoCarnePessoa = 50.00 * 0.300, precolinguicaPessoa = 28.00 * 0.200, precofrangoPessoa = 22.00 * 0.150;

    float totalCarne = quantidade_pessoas * precoCarnePessoa, totalLinguica = quantidade_pessoas * precolinguicaPessoa, totalFrango = quantidade_pessoas * precofrangoPessoa;

    float pesoCarne = quantidade_pessoas * 0.300, pesoLinguica = quantidade_pessoas * 0.200, pesoFrango = quantidade_pessoas * 0.150;

    float custoTotal = totalCarne + totalFrango + totalLinguica, porPessoa = custoTotal / quantidade_pessoas;

    printf("\nQuantidades:\n");
    printf("Carne: %.1f kg - Linguiça: %.1f kg - Frango: %.1f kg\n", pesoCarne, pesoLinguica, pesoFrango);

    printf("\nCusto total:\n");
    printf("Carne: R$ %.2f - Linguiça: R$ %.2f - Frango: R$ %.2f\n", totalCarne, totalLinguica, totalFrango);

    printf("\nCusto total do churrasco: R$ %.2f\n", custoTotal);
    printf("Cada pessoa deve contribuir com: R$ %.2f\n", porPessoa);
    
    return 0;
}