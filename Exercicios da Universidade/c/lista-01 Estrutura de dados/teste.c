#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct no{
    int info;
    struct no * prox;
}No;

int main(){

    int i;
    No* pont=NULL;
    No* aux;

    for (i=1;i<=10;i++){
        aux=(No*) malloc(sizeof(No));
        aux->info=i;
        aux->prox=pont;
        pont=aux;
    }

    for (i=1;i<=10;i++){
        printf("%d ",aux->info);
        aux=aux->prox;
    }

    for(i=1;i<=10;i++){
        aux=pont;
        pont=pont->prox;
        free(aux);
    }
    printf("\n");

    return 0;
}