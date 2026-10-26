// Mariane Santana da Silva

#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n___ Atividade 9 ___\n");

    int pistaMetros, voltas, tempoVoltaSegundos;
    float distanciaKm, previsaoMinutos;

    printf("Digite o tamanho da pista em metros: ");
    scanf("%d", &pistaMetros);

    printf("Digite a quantidade de voltas: ");
    scanf("%d", &voltas);

    printf("Digite o tempo da primeira volta em segundos: ");
    scanf("%d", &tempoVoltaSegundos);

    distanciaKm = (pistaMetros * voltas) / 1000.0;
    previsaoMinutos = (tempoVoltaSegundos * voltas) / 60.0;

    printf("\nAnálise Preditiva Concluída\n");
    printf("--\n");
    printf("Distância total a ser percorrida: %.2f km.\n", distanciaKm);
    printf("Previsão de conclusão: %.1f minutos.\n", previsaoMinutos);

    return 0;
}