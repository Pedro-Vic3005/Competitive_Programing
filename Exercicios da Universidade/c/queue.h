#include <stdlib.h>

typedef struct queueNode{
    int value;
    struct queueNode * prox;
}QueueNode;

typedef struct queue{
    QueueNode *start,*end;
}Queue;

void inicializar(Queue * f){
    f->start=NULL;
    f->end=NULL;
}

int isFull(Queue f){
    return 0;
}

int isEmpty(Queue f){
    if (f.start==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enQueue(Queue * f,int info){
    QueueNode * new = (QueueNode*) malloc(sizeof(QueueNode));
    new->value=info;
    new->prox=NULL;

    if (isEmpty(*f)==1){
        f->start=new;
        f->end=new;
    }
    else{
        f->end->prox=new;
        f->end=new;
    }
}

int deQueue(Queue * f){
    QueueNode * aux= f->start;
    f->start=f->start->prox;
    int retorno = aux->value;

    if(f->start == NULL){
        f->end=NULL;
    }

    free(aux);
    return retorno;
}

int head(Queue f){
    return f.start->value;
}

void cancel(Queue f, char Nome[]){
    //Se inicio->valor diferente de Nome, ent sigo para o proximo, se prox == null ent cabo

}

void list (Queue f){
    QueueNode * aux = f.start;
    while(aux->prox!=NULL){
        printf("%d")
    }
}