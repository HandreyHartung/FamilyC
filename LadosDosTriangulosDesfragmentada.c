#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

// Utilizando mais de uma condição em uma linha //

int ladoA, ladoB, ladoC;
printf(" Digite os 3 valores :");
scanf("%d %d %d ", &ladoA, &ladoB, &ladoC );

//Analisa se é equilátero //

    if( (ladoA == ladoB) && (ladoB == ladoC) ) { // Nesse caso implica que as duas condições teria que ser verdadeiras para poder empilhar no if //

    printf("\n O Triangulo e equilatero ");

}else{

    // Analisa se pelomenos existem dois lados iguais //
    if ( (ladoA == ladoB ) || (ladoB == ladoC) || (ladoC == ladoA )){
    printf("\n Pelo menos todos os lados são iguais, mas não todos  ");

}else{

    printf("\n O triangulo nao e equilatero ");



        }
    }
}
