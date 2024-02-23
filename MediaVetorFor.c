#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,h"");

    float vetor [3];
    int i;
    for(i = 0; i < 3; i++){
        printf("Digite um valor : ");
        scanf("%f", &vetor[i]);
    }
    for(i = 0; i < 3; i++){
        printf("\n Vetor[%d] = %.2f",i, vetor[i]);
    }
    printf("\n A média dos valores é: %.2f", (vetor[0]+vetor[1]+vetor[2])/3);

return 0;
}
