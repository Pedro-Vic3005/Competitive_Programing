#include <stdio.h>

int main (){

    int quant_choco,max_por_jogada;

    scanf("%d %d",&quant_choco,&max_por_jogada);

    if (quant_choco%(max_por_jogada+1)==0){
        printf("Carlos\n");
    }
    else{
        printf("Paula\n");
    }
    return 0;
}