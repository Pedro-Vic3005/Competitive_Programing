#include <stdio.h>
#include "../stack.h"

int main (){

    int n,div=1;
    Stack pilha;
    inicializar(&pilha);

    printf("Digite um numero: ");
    scanf("%d",&n);

    while (1){
        if (div*10<n){
            div*=10;
        }
        else{
            break;
        }
    }

    while(1){

        if (isFull(pilha)==1 || div==0){
            //printf("Stack Full!\n");
            break;
        }
        else{
            push(&pilha,n/div);
            n%=div;
            div/=10;

        }
    }

    printf("O número invertido: ");

    while(1){

        if (isEmpty(pilha)==1){
            break;
        }
        else{
            printf("%d",pop(&pilha));
        }
    }

    return 0;
}

