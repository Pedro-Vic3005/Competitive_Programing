#include <stdio.h>

int main (){

    int i,j,quantidade;

    scanf("%d",&quantidade);

    int vetor_trocas[quantidade],vetor_original[quantidade],vetor_final[quantidade];

    for (i=0;i<quantidade;i++){
        scanf("%d",&vetor_original[i]);
    }

    for (i=0;i<quantidade;i++){
        scanf("%d",&vetor_trocas[i]);
    }

    for (i=0;i<quantidade;i++){
        vetor_final[i]=vetor_original[i];
    }

    for (i=0;i<quantidade-1;i++){
        j=i+1;
        printf("indices i j: %d %d\n\n",i,j);
        while(j<quantidade){
            printf("valores de i j: %d %d\n\n",vetor_trocas[i],vetor_trocas[j]);
            if (vetor_trocas[i]==vetor_trocas[j]){
                vetor_final[i]=vetor_original[j];
                vetor_final[j]=vetor_original[i];
                break;
            }

            j++;

        }
    }

    for (i=0;i<quantidade;i++){
        printf("%d",vetor_final[i]);
        if (i<quantidade-1){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}