#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

float a;
float b;


printf("\n Exibindo valores para soma \n ");
printf("\n Exiba o valor da primeira variavel : ");
scanf("%f", &a);
printf("\n Valor selecionado : %.1f ", a);

printf("\n Exiba o valor da segunda variavel : ");
scanf("%f", &b);
printf("\n Valor selecionado : %.1f ", b);

float x = ( a + b ) / 2;
printf("\n Soma das variaveis :%.1f ", x);

while( x <= 20){
    printf("\n %.1f Resultado invalido ", x);
    break;
}

while(x >= 10 ){
    printf("\n %.1f Resultado invalido ", x);
    break;
}

while(x == 7 ){
    printf("\n %.1f Resultado valido ", x);
    break;
}

system("pause");

}

