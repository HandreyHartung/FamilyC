#include <stdio.h>
#include <stdlib.h>


void main (){

int i;
int j;

printf("\n Efetuando alguns scripts com estrutura de repeticao FOR ");

printf("\n Selecione um numero : ");
scanf("\n%d", &i);
printf("\n O numero selecionado e : %d ", i);

printf("\n Selecione outro numero : ");
scanf("\n%d", &j);
printf("\n O numero selecionado e :  %d ", j);

int a = i + j;
int b = i - j;
int c = i * j;
int d = i / j;

printf("\n - A soma dos numeros sera gerado -  ");

printf("\n O resultado da adicao sera : %d ", a);
printf("\n O resultado da subtracao sera : %d ", b);
printf("\n O resultado da multiplicacao sera : %d ", c);
printf("\n O resultado da divisao sera : %d ", d);

for(a=1; a<=10; a++){
    printf("\n%d", a);
    break;
}

printf("\n");

for(b=0; b<=100; b++){
    printf("\n%d", b);
    break;
}

printf("\n%d", b);

for(c=0; c<=100; c++){
    printf("\n%d", c);
    break;
}

printf("\n");

for(d=1; d<=100; c++){
    printf("\n%d", d);
    break;

}
return 0;
}
