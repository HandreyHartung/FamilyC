#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){


    setlocale(LC_ALL, ""); // A função setlocale() em C é usada para configurar ou obter configurações específicas de localização (locale) para programas. A configuração de localização é importante para operações que dependem de características regionais, como formato de data, números, moeda, entre outras.

    float nota1, nota2, nota3, media;
    printf("Digite a nota 1:");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("\nA média do aluno foi: %.2f", media); // %.2f representa a quantidade de casas que ira ler quando se compila um código executável, nesse exemplo : %.2f ira pular duas casas //

    if(media > 7 ){
        printf("\nO aluno foi aprovado! Parabéns campeão!");
    }else{
        printf("\nO aluno foi reprovado! Sinto muito, na próxima você vai conseguir!");
    }

}
