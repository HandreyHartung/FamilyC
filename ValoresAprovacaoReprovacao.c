#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){


    setlocale(LC_ALL, ""); // A fun��o setlocale() em C � usada para configurar ou obter configura��es espec�ficas de localiza��o (locale) para programas. A configura��o de localiza��o � importante para opera��es que dependem de caracter�sticas regionais, como formato de data, n�meros, moeda, entre outras.

    float nota1, nota2, nota3, media;
    printf("Digite a nota 1:");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("\nA m�dia do aluno foi: %.2f", media); // %.2f representa a quantidade de casas que ira ler quando se compila um c�digo execut�vel, nesse exemplo : %.2f ira pular duas casas //

    if(media > 7 ){
        printf("\nO aluno foi aprovado! Parab�ns campe�o!");
    }else{
        printf("\nO aluno foi reprovado! Sinto muito, na pr�xima voc� vai conseguir!");
    }

}
