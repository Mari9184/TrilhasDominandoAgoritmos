#include <stdio.h>
#include <string.h>
int main() {
char cor[20];

printf("Que cor está o farol? ");
scanf("%19s", cor);

if (strcmp(cor, "verde") == 0) {
 printf("Atravesse\n");}
else if (strcmp(cor, "vermelho") == 0) {
 printf("Espere\n");}
else {
 printf("Cor inválida.\n");}

return 0;
}
