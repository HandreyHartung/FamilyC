#include <stdio.h>      // Acrescentando as bibliotecas //
#include <stdlib.h>
 

void main(){  //  Função principal //
 
    //Definindo Variáveis
    int a = 5, b = 10, c = 15; // Acrescentando variaveis do tipo inteiro //
    char d = 'x'; // Acrescentando variavel char //
 
    //Maior
    if(a > 2){   // Se a que resulta em 5 for maior que 2 o printf abaixo ira exibir a seguinte informação //
        printf("\n %d eh maior que 2", a); // %d representamos que contactamos a variavel INT para ser exibida no printf, junto com a especificação da variavel a = 5 //
    }
 
    //Maior ou Igual
    if(c >= b){
        printf("\n %d eh maior ou igual que %d", c, b);
    }
 
    //Menor
    if(a < 10){
        printf("\n %d eh menor que 10", a);
    }
 
    //Menor ou igual
    if(a <= 10){
        printf("\n %d eh menor ou igual a 10", a);             // SE CASO VOCÊ ENTENDEU O EXEMPLO ACIMA EXPLICANDO PODEMOS REPRESENTAR OS DEMAIS DA MESMA PROPORÇÃO, POREM ALTERA A FORMA DE POSIÇÕES E AS VARIAVEIS //
    }
 
    //Diferente
    if(c != 10){
        printf("\n %d nao eh 10", c);
    }
    if(d != 'a'){
        printf("\n %c nao eh a", d);
    }
 
                            
    system("pause"); // Pausa para a execução do código //
 
}
