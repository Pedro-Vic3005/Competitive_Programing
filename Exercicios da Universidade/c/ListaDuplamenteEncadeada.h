#define TRUE 1
#define FALSE 0
#include <stdlib.h>
#include <stdio.h>

typedef struct ldenode {
    struct ldenode* ant;
    int info;
    struct ldenode* prox;
} LDENode;

typedef struct lde {
    LDENode* inicio;
    LDENode* fim;
    int qtd;
} LDE;

void inicializar (LDE* lista) {
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->qtd = 0;
}

int isEmpty (LDE lista) {
    if (lista.qtd == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void removerFinal (LDE* lista) {
    LDENode* aux;
    if (isEmpty(*lista) == TRUE) {
        printf("Lista vazia!\n");
    }
    else{
        aux = lista->fim;
        if (lista->qtd == 1) {
            lista->inicio = NULL;
            lista->fim = NULL;
            free(aux);
        }
        else{
            lista->fim = lista->fim->ant;
            lista->fim->prox = NULL;
            free(aux);
        }
        lista->qtd--;
        printf("Remoção efetuada!\n");
    }
}

void removerInicio (LDE* lista){
    LDENode* aux;
    if (isEmpty(*lista) == TRUE) {
        printf("Lista vazia!\n");
    }
    else{
        aux = lista->inicio;
        if (lista->qtd == 1) {
            lista->inicio = NULL;
            lista->fim = NULL;
            free(aux);
        }
        else{
            lista->inicio = lista->inicio->prox;
            lista->inicio->ant = NULL;
            free(aux);
        }
        lista->qtd--;
        printf("Remoção efetuada!\n");
    }
}

int buscar (LDE *lista,int valor, int deletar){

    LDENode * aux = lista->inicio;
    while(aux!=NULL){
        if(aux->info==valor){
            if (deletar==1){
                if (lista->qtd==1){
                    lista->inicio=NULL;
                    lista->fim=NULL;
                }
                else{
                    if (aux==lista->fim){
                        removerFinal(lista);
                    }
                    else if (aux==lista->inicio){
                        removerInicio(lista);
                    }
                    else{
                        aux->ant->prox=aux->prox;
                        aux->prox->ant=aux->ant;
                        lista->qtd--;
                        printf("Remoção efetuada!\n");
                    }
                }
                free(aux);
                break;
            }
            return TRUE;
        }
        else{
            aux=aux->prox;
        }
    }
    return FALSE;
}

void inserirInicio /*sem repetidos*/ (LDE* lista, int valor) {
    LDENode *novo;
    novo=(LDENode*)malloc(sizeof(LDENode));
    novo->info=valor;
    novo->ant=NULL;
    novo->prox=NULL;
    if(isEmpty(*lista)==TRUE){
        lista->inicio=novo;
        lista->fim=novo;
    }
    else{
        if (buscar(lista,valor,0)==1){
            printf("Esse valor já existe!\n");
        }
        else{
            novo->prox=lista->inicio;
            lista->inicio->ant=novo;
            lista->inicio=novo;
        }
    }
    lista->qtd++;
    printf("Inserção efetuada!\n");
}

void inserirFinal /*sem repetidos*/ (LDE* lista, int valor) {
    LDENode *novo;
    novo=(LDENode*)malloc(sizeof(LDENode));
    novo->info=valor;
    novo->ant=NULL;
    novo->prox=NULL;
    if(isEmpty(*lista)==TRUE){
        lista->inicio=novo;
        lista->fim=novo;
    }
    else{
        if (buscar(lista,valor,0)==1){
            printf("Esse valor já existe!\n");
        }
        else{
            novo->ant=lista->fim;
            lista->fim->prox=novo;
            lista->fim=novo;
        }
    }
    lista->qtd++;
    printf("Inserção efetuada!\n");
}

void list (LDE lista){
    LDENode * aux = lista.inicio;
    if (isEmpty(lista) == TRUE) {
        printf ("Lista vazia \n");
    }
    else {
        while(aux != NULL){
            printf("%d ", aux->info);
            aux = aux->prox;
        }
        printf("\n");
    }
}

void listReverse (LDE lista) {
    LDENode* aux;
    aux = lista.fim;
    if (isEmpty(lista) == TRUE) {
        printf ("Lista vazia \n");
    }
    else {
        while(aux != NULL){
            printf("%d ", aux->info);
            aux = aux->ant;
        }
        printf("\n");
    }
}




