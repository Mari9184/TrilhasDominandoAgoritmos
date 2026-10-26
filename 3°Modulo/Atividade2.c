#include <stdio.h>
#include <math.h> // biblioteca usada para a Potencia

int main()
{
    int V1, V2, Vresultado;
    int operador;

    while (operador != 0)
    {
        printf("___ Calculadora ____\n");
        printf("Escolha o operador pelo numero:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");

        printf("Qual operador? ");
        scanf("%d", &operador);

        if (operador >= 1 && operador <= 4){
            printf("Digite o 1° numero: ");
            scanf("%d", &V1);
            printf("Digite o 2° numero: ");
            scanf("%d", &V2);
        }

        switch (operador)
        {
        case 1:
            printf("Resultado: %d", V1 + V2);
            break;

        case 2:
            printf("Resultado: %d", V1 - V2);
            break;

        case 3:
            printf("Resultado:%d", V1 * V2);
            break;

        case 4:
            printf("Resultado:%d", V1 / V2);
            break;

        case 0:
            printf("Saindo...");
            break;

        default:
            printf("Operador invalido!\n");
            break;
        }
    }

    return 0;
}
