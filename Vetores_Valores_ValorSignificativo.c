#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");

    int vetor [4];
    int x;

    vetor[0];
    vetor[1];
    vetor[2];
    vetor[3];
    vetor[4];

    printf("\n Exiba o primeiro vetor : ");
    scanf("%d",&vetor[0]);
    printf(" Primeiro vetor valor = %d ",vetor[0]);

    printf("\n");

    printf("\n Exiba o segundo vetor : ");
    scanf("%d",&vetor[1]);
    printf(" Segundo vetor valor = %d ",vetor[1]);

    printf("\n");

    printf("\n Exiba o terceiro vetor : ");
    scanf("%d", &vetor[2]);
    printf(" Terceiro vetor valor = %d ", vetor[2]);

    printf("\n");

    printf("\n Exiba o quarto vetor : ");
    scanf("%d", &vetor[3]);
    printf(" Quarto vetor valor = %d ", vetor[3]);

    printf("\n");

    printf("\n Exiba o quinto vetor : ");
    scanf("%d", &vetor[4]);
    printf(" Quinto vetor valor = %d ", vetor[4]);

    printf("\n");

    int soma = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4])/3;

    printf("\n Soma dos vetores = %d",soma);

    printf("\n");


for(x = 0; x < 5; x++){
    printf("\n Posição significativa do vetor %d : %d ",x, vetor[x]);

}

    return 0;

}




