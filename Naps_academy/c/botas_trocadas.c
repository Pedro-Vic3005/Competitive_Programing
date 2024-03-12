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
    //printf("%d\n",sizeof(D)/sizeof (D[0]));
    for (i=sizeof(D)/sizeof(D[0])-1; i>=0; i--){
        for (j=sizeof(E)/sizeof(E[0])-1; j>=0; j--){
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
