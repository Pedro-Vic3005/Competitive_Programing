#include <stdio.h>

int main (){

    int i,quantidade,posicao,menor_valor=32767,valor;

    scanf("%d",&quantidade);

    for(i=0;i<quantidade;i++){
        scanf("%d",&valor);

        if (valor<menor_valor){
            menor_valor=valor;
            posicao=i;
        }
    }

    printf("Menor valor: %d\n",menor_valor);
    printf("Posicao: %d\n",posicao);

    return 0;
}
