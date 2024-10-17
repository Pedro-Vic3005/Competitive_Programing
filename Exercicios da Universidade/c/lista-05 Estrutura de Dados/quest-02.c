#include <stdio.h>
#include "../stack.h"

int main(){

    Stack binary;
    inicializar(&binary);
    int n;

    printf("Digite um número: ");
    scanf("%d",&n);

    while(n>=1){

        if (isFull(binary)){
            break;
        }
        else{
            push(&binary,n%2);
            n/=2;
        }
    }

    printf("O número na base binária: ");

    while(isEmpty(binary)!=1){

        printf("%d",pop(&binary));
    }

    return 0;
}