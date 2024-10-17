#include <stdio.h>

int main(){

    int size,i,j,temp;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&size);

    int vetor[size];

    printf("Digite os valores do vetor: ");
    for (i=0;i<size;i++){
        scanf("%d",&vetor[i]);
    }

    for (i=0,j=1;i<size-1;i++,j++){
        if (vetor[i]>vetor[j]) {
            temp=vetor[i];
            vetor[i]=vetor[j];
            vetor[j]=temp;
            if (i!=0) {
                i-=2;
                j-=2;
            }
        }
    }
    printf("\nAqui está o vetor ordenado: ");
    for (i=0;i<size;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}