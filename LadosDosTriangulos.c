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
        printf("\n O tri�ngulo � equil�tero ");
    }else{
        printf("\n O Tri�ngulo n�o � equil�tero" );
    }
}else{
    printf("\n O tri�ngulo N�O � equil�tero ");

    }

system("pause");

}


