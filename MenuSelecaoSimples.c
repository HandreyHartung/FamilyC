#include <stdio.h>
#include <stdlib.h>

void main (){

int opcao;
while(opcao <1 || opcao > 3){

printf("\n 1 - opcao 1 \n              ");
printf("\n 2 - opcao 2 \n");
printf("\n 3 - opcao 3 \n");

scanf("%d", &opcao);

switch(opcao){
    case 1:
        printf("\n opcao 1 foi escolhido ");
    break;

    case 2:
        printf("\n opcao 2 foi escolhido ");
    break;

    case 3:
        printf("\n opcao 3 foi escolhida ");
    break;

    default:
        printf("\n Opcao Invalida ");
    break;

}

return 0;
    }
        }
