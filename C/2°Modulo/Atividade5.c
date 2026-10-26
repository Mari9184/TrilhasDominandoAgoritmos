#include <stdio.h>

int main(){
    
    float n1, n2, n3, soma;
    int faltas;
    
    printf("1° nota:");
    scanf("%f", &n1);

    printf("2° nota:");
    scanf("%f", &n2);

    printf("3° nota:");
    scanf("%f", &n3);

    printf("Quantas faltas tem?");
    scanf("%d", &faltas);
    
    soma = (n1+n2+n3)/3;
    
    if (faltas < 4){
        if(soma >= 8 ){
            printf("aprovado com sucesso");
        }
        else if (soma < 8 && soma > 6 ){
            printf("aprovado");
        }
        else if(soma == 0 ){
            printf("Desistente");
        }
        else{
            printf("Recuperação");
        }
    }
    else{
        printf("Reprovado por faltas\n");
    }

    return 0;
}
