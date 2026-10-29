#include <stdio.h>

void lerDados(float *tamanhoPista, int *numVoltas, float *tempoPrimeiraVolta) {
    printf("Qual o Tamanhda pista? ");
    scanf("%f", tamanhoPista);

    printf("Quntas voltas? ");
    scanf("%d", numVoltas);

    printf("Tempo da primeira Volta");
    scanf("%f", tempoPrimeiraVolta);
}

void calcularPerformance(float tamanhoPista, int numVoltas, float tempoPrimeiraVolta, float *distanciaKm, float *tempoMinutos) {
    *distanciaKm = (tamanhoPista * numVoltas) / 1000.0;
    *tempoMinutos = (tempoPrimeiraVolta * numVoltas) / 60.0;
}

void exibirResultado(float distanciaKm, float tempoMinutos) {
    printf("Análise Preditiva Concluída\n");
    printf("--\n");
    printf("Distância total a ser percorrida: %.2f km.\n", distanciaKm);
    printf("Previsão de conclusão: %.1f minutos.\n", tempoMinutos);
}

int main() {
    float tamanhoPista, tempoPrimeiraVolta;
    int numVoltas;
    float distanciaKm, tempoMinutos;

    lerDados(&tamanhoPista, &numVoltas, &tempoPrimeiraVolta);
    calcularPerformance(tamanhoPista, numVoltas, tempoPrimeiraVolta, &distanciaKm, &tempoMinutos);
    exibirResultado(distanciaKm, tempoMinutos);

    return 0;
}