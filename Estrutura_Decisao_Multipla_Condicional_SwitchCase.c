#include <stdio.h>
#include <stdlib.h>

void main (){

   int h; // Variavel declarada //

   printf("\n Insira um valor de 1 a 7 : "); // Insirindo o que iremos exibir na tela como justificativa da execu��o //
   scanf("%d", &h); // Ativando a fun��o,para indicar o tipo de dado que ser� lido/exibido //

   switch(h){ // Acionando a Estrutura de controle de fluxo, para a sele��o de diferentes blocos //
        case 1: // Especificando diferentes condi��es que podem ser comparadas com a express�o fornecida no Switch //
            printf("\n DOMINGO - SUNDAY - \n"); // Exibir na tela a mensagem do case1 //
                break; // Interromper a execu��o de um block switch //
        case 2:
            printf("\n SEGUNDA - MONDAY - \n");
                break;

        case 3:
            printf("\n TERCA - TUESDAY - \n");
                break;

        case 4:
            printf("\n QUARTA - WEDNESDAY - \n");
                break;


        case 5:
            printf("\n QUINTA - TURSDAY - \n");
                break;


        case 6:
            printf("\n SEXTA - FRIDAY \n ");
                break;


        case 7:
            printf("\n SABADO - MONDAY \n ");
                break;

        default:
            printf("\n SEM DATA PREVISTA \n ");
                break;

   }

    system("pause");


}
