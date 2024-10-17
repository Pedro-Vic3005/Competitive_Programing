#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct queueNode{
    char value[20];
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

void enQueue(Queue * f,char info[20]){
    QueueNode * new = (QueueNode*) malloc(sizeof(QueueNode));
    strcpy(new->value,info);
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

char * deQueue(Queue * f){
    char * retorno = (char *) malloc(sizeof(char)*20);
    QueueNode * aux= f->start;
    f->start=f->start->prox;
    strcpy(retorno,aux->value);

    if(f->start == NULL){
        f->end=NULL;
    }

    free(aux);
    return retorno;
}

char * head(Queue f){
    char * retorno = (char*) malloc(sizeof(char)*20);
    strcpy(retorno,f.start->value);
    return retorno;
}

void cancel(Queue * f, char nome[20]){
    QueueNode * clean = (QueueNode*) malloc(sizeof(QueueNode));
    Queue * bridge = (Queue*) malloc(sizeof (Queue));
    clean->prox = f->start;
    bridge->start = f->start;
    bridge->end = NULL;
    strcpy(clean->value,nome);
    while(clean->prox!=NULL){
        if (isEmpty(*f)==1){
            printf("A fila ja está vazia!\n");
            break;
        }
        else{
            if (f->start==f->end){
                if (strcmp(clean->value,bridge->start->value)==0){
                    f->start=NULL;
                    f->end=NULL;
                    clean->prox=NULL;
                    free(bridge);
                }
                else{
                    printf("Palavra não encontrada!\n");
                }
                break;
            }
            else{
                bridge->start=clean->prox->prox;
                bridge->end=clean->prox->prox->prox;
                if (strcmp(clean->value,bridge->start->value)==0){
                    clean->prox->prox=bridge->end;
                    bridge->end=NULL;
                    free(bridge);
                    break;
                }
                else{
                    clean->prox=clean->prox->prox;
                    if (clean->prox==f->end){
                        printf("Palavra não encontrada!\n");
                        break;
                    }
                    bridge->start=bridge->end;
                    bridge->end=bridge->end->prox;
                }
            }
        }
    }
    if (clean->prox==NULL){
        printf("Palavra não encontrada!\n");
    }
}

void list (Queue *f){
    QueueNode * aux = (QueueNode*) malloc(sizeof(QueueNode));
    aux->prox = f->start;
    printf("A fila de palavras: \n");
    while(aux->prox!=NULL){
        strcpy(aux->value,aux->prox->value);
        printf("%s\n",aux->value);
        aux->prox=aux->prox->prox;
    }
}