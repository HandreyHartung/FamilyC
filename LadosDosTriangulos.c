#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

int ladoA, ladoB, ladoC;

printf("\n Digite os 3 valores : ");
scanf("%d %d %d", &ladoA, &ladoB, &ladoC);


if( ladoA == ladoB){
    if ( ladoB == ladoC ){
        printf("\n O triângulo é equilátero ");
    }else{
        printf("\n O Triângulo não é equilátero" );
    }
}else{
    printf("\n O triângulo NÃO é equilátero ");

    }

system("pause");

}


