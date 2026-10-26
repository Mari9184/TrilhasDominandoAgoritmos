#include <stdio.h>

int main() {
int num;
int tab = 0;

printf("Digite um numero: ");
scanf("%d", &num);

while (tab <= 10)
{
    printf("%d X %d = %d\n",tab,num,num*tab);
    tab++;
}

return 0;}
