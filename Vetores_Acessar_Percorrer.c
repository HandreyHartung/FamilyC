#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "");

int vetor[3];

vetor [0] = 5;
vetor [1] = 10;
vetor [2] = 15;

printf("\n Posicao 0: %d", vetor[0] );
printf("\n Posicao 1: %d", vetor[1] );
printf("\n Posicao 2: %d", vetor[2] );

system("pause");
}
