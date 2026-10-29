#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void exibirMenu() {
    printf("___ CALCULADORA ___\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Resto\n");
    printf("6. Potência\n");
}

void lerDados(double *v1, double *v2, char *operacao) {
    printf("Digite o primeiro número: ");
    scanf("%lf", v1);
    
    printf("Digite o segundo número: ");
    scanf("%lf", v2);
    
    printf("Digite o número ou o nome da operação: ");
    scanf(" %48[^\n]", operacao); 
}

int calcular(double v1, double v2, const char *operacao, double *resultado, char *simbolo) {

    if (strcmp(operacao, "1") == 0 || strcasecmp(operacao, "Soma") == 0) {
        *resultado = v1 + v2;
        strcpy(simbolo, "+");
        return 1;
    }

    if (strcmp(operacao, "2") == 0 || strcasecmp(operacao, "Subtração") == 0 || strcasecmp(operacao, "Subtracao") == 0) {
        *resultado = v1 - v2;
        strcpy(simbolo, "-");
        return 1;
    }

    if (strcmp(operacao, "3") == 0 || strcasecmp(operacao, "Multiplicação") == 0 || strcasecmp(operacao, "Multiplicacao") == 0) {
        *resultado = v1 * v2;
        strcpy(simbolo, "*");
        return 1;
    }

    if (strcmp(operacao, "4") == 0 || strcasecmp(operacao, "Divisão") == 0 || strcasecmp(operacao, "Divisao") == 0) {
         if (v2 == 0) return 0;
        *resultado = v1 / v2;
        strcpy(simbolo, "/");
        return 1;
    }

    if (strcmp(operacao, "5") == 0 || strcasecmp(operacao, "Resto") == 0) {
        *resultado = fmod(v1, v2);
        strcpy(simbolo, "mod");
        return 1;
    }

    if (strcmp(operacao, "6") == 0 || strcasecmp(operacao, "Potência") == 0 || strcasecmp(operacao, "Potencia") == 0) {
        *resultado = pow(v1, v2);
        strcpy(simbolo, "^");
        return 1;
    }

    return 0; 
}

void exibirResultado(int valido, double v1, double v2, double resultado, const char *simbolo) {
    printf("\nResultado:\n");
    if (valido) {
        printf("%.1f %s %.1f = %.1f\n", v1, simbolo, v2, resultado);
    } else {
        printf("Operação não suportada\n");
    }
}

int main() {
    double v1, v2, resultado;
    char operacao[50];
    char simbolo[10];

    exibirMenu();

    lerDados(&v1, &v2, operacao);
    int valido = calcular(v1, v2, operacao, &resultado, simbolo);
    exibirResultado(valido, v1, v2, resultado, simbolo);

    return 0;
}