#include <stdio.h>

int main (){

    int i,quantidade_linha,soma=0;
    scanf("%d",&quantidade_linha);

    int primeira_linha[quantidade_linha];

    scanf("%d",primeira_linha);
    printf("%d\n",primeira_linha);

    for (i=1;i<quantidade_linha;i++){
        soma+=primeira_linha[i]+primeira_linha[i-1];
    }
    printf("%d",soma);




    return 0 ;
}
