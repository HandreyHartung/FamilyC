#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

int a;
int b;


 printf("\n SOMANDO VALORES COM WHILE E IF ");

 printf("\n Selecione um numero : \n ");
 scanf("%d", &a);
 printf("\n Exiba o primeiro valor : %d \n ", a);

 printf("\n Selecione outro numero : \n ");
 scanf("%d", &b);
 printf("\n Exiba o segundo valor : %d \n ", b);


 int x = ( a + b ) * 2;
 printf("\n Exibindo a soma dos numeros : %d \n ", x);

 while( x == 10){
        printf("\n Valor verdadeiro ", x);
            break;


        if ( !x ){
            printf("\n O valor e falso ", x);
            break;
        }
 }

 x++;

}



