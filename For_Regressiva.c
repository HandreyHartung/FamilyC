#include <stdio.h>
#include <stdlib.h>

int main (){

int x; // Declarando a variavel principal //
printf("\n Realizando a contagem regressiva com a estrutura FOR "); //  exibindo na tela do compilador uma mensagem //
printf("\n Selecione um numero : "); //  Exibindo na tela do compilador o sele��o de numeros aleatorios //
scanf("\n%d",&x); // Utilizando a sele��o de numeros dentro do scanf e lendo a variavel "x" para selecionar um numero que me satisfa�a //
printf("\n O Numero selecionado e : %d ",x); // imprimindo na tela o numero aleatorio selecionado por mim //

for(x=x; x>=1; x--){ // Declarando a Estrutura de repeti��o FOR para realizar a contagem regressiva // // Explicando - Se X e igual a X & X e maior e igual a 1; ent�o incrementamos com x-- para que realize a contagem regressiva // // Obs X >= 1 Isso simboliza que X tem que ser maior ou preferencialmente igual a 0 //
    printf("\n%d",x); // Exibindo na tela //
}

return 0; // Fim de script //

}
