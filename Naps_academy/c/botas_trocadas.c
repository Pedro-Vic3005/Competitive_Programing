#include <stdio.h>

int main (){

    int j,i,botas,tamanho,pares=0;
    char lado;

    scanf("%d",&botas);

    int D[botas];
    int E[botas];

    for (i=0;i<botas;i++){
        scanf("%d %c",&tamanho,&lado);
        if (lado=='D'){
            D[i]=tamanho;
        }
        else{
            E[i]=tamanho;
        }
    }

    for (i=0; i<botas; i++){
        for (j=0; j<botas; j++){
            if (D[i]==E[j]){
                pares++;
                E[j]=-1;
                break;
            }
        }
    }
    printf("%d",pares);

    return 0;
}
