#include <stdio.h>
#include <stdlib.h>

int main (){

int a;

printf("\n Declarando um valor para WHILE ");
printf("\n Selecione um numero : ");
scanf("%d", &a);
printf("\n Numero selecionado : %d ", a);



while( a <= 20){

    printf("\n%d",a);

    a++;

}

a = a;


do{
    printf("\n%d",a);

    a++;

}

while( a <= 20);

return 0;

}
