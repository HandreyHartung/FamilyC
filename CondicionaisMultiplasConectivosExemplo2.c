#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"");

float a;

printf("\n Identificando um valor :  ");
scanf("%f",&a);
printf("\n O valor inserido foi : %2.f ",a);


if(a > 5 && a < 7 ){
    printf("\n A v�riavel est� entre 5 e 7 " );
    printf("\n E seu valor � : %2.f ",a);

}

if(a < 7 || a > 1 ){
    printf("\n A variavel esta entre 1 at� 7 ");
    printf("\n Seu valor ser� : %2.f ", a);
}

if(((a < 7 && a > 5, a > 1 || a < 7 , a == 7 ))){
    printf("\n a variavel A est� no valor  : %2.f ",a);

}
return 0;

}
