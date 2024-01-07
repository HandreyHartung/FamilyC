#include <stdio.h>
#include <stdlib.h>

void main (){

int a;
int b;
int c;

char x;
printf(" \n Acrescente o primeiro valor \n ");
scanf("%d", &a);

printf(" \n Exibindo o primeiro valor : %d \n ", a);

printf(" \n Acrescente o segundo valor : \n");
scanf("%d", &b);

printf(" \n Exibindo o segundo valor : %d \n ", b);

printf(" \n Acrescente o terceiro valor : %d \n ", c);
scanf("%d", &c);

printf(" \n Exibindo o terceiro valor : %d \n ",c);

printf(" \n Realizando a soma dos numeros \n ");

x = ( a + b ) * c;
printf(" \n O valor da soma será : \n %d", x);

fflush(stdin);

printf(" \n Selecione uma letra para ser exibida \n ");
scanf("%c", &c);

printf(" Exibindo a letra informada : %c",c);
return 0;

}
