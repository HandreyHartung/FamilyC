#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"");

float vetor [3];
printf("Digite um valor :");
scanf("%f",&vetor[0]);
printf("\n Digite um valor : ");
scanf("%f", &vetor[1]);
printf("\n Digite um valor : ");
scanf("%f", &vetor[2]);

printf("\n Vetor[0] = %.2f", vetor[0]);
printf("\n Vetor[1] = %f.2f", vetor [1]);
printf("\n Vetor[2] = %f.2f", vetor [2]);

printf("\n A media dos valores é: %.2f", (vetor[0]+vetor[1]+vetor[2])/3);

system ("pause");
}
