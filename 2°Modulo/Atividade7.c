#include <stdio.h>

int main() {
    
    float nCandidato, nCorte, nAprovacao;
    
    printf("Qual foi sua nota?");
    scanf("%f", &nCandidato);
    
    printf(" Qual é a nota de corte? ");
    scanf("%f", &nCorte);
    
    printf(" Qual é a nota para aprovação? ");
    scanf("%f", &nAprovacao);
    
    if (nCandidato<nCorte){
        printf("Reprovado");
    }
    else if (nCandidato >= nAprovacao){
        printf("Aprovado! ");
    }
    else{
        printf(" Lista de espera  ");
    }
        
    return 0;
}
