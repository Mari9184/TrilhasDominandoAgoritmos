#include <stdio.h>
#include <string.h>

int main(){
    
    char palavra[100];
    
    printf("Digite uma palavra: \n");
    scanf("%s", &palavra);

    for (size_t i = 0; i < strlen(palavra); i++){
        printf("%c\n", palavra[i]);
    }
    
    return 0;
}
