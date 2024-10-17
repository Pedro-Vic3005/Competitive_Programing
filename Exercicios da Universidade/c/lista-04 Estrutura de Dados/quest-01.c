#include <stdio.h>
#define size 100

typedef struct stack{
    int top;
    int data[size];
}Stack;

int main(){

    int n,div=1;
    Stack stack;
    stack.top=-1;

    printf("Digite um numero inteiro: ");
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

        stack.data[stack.top+1]=n/div;
        n%=div;
        stack.top++;
        div/=10;

        if(n<10){
            stack.data[stack.top+1]=n/div;
            stack.top++;
            break;
        }
    }

    printf("O numero invertido: ");

    while(stack.top>-1){

        printf("%d",stack.data[stack.top]);
        stack.top--;
    }

    return 0;
}