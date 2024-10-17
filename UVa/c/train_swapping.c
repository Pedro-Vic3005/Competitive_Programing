#include <stdio.h>

int main(){

    int c=0,casos;
    scanf("%d",&casos);

    while(c<casos){

        int size,i,j,temp,swap=0;

        scanf("%d",&size);

        int vetor[size];

        for (i=0;i<size;i++){
            scanf("%d",&vetor[i]);
        }

        for (i=0,j=1;i<size-1;i++,j++){
            if (vetor[i]>vetor[j]) {
                temp=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temp;
                swap++;
                if (i!=0) {
                    i-=2;
                    j-=2;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",swap);
        c++;
    }

    return 0;
}