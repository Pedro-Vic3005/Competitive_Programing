#include <stdio.h>

typedef struct binary{
    int top;
    int number[100];
}Binary;

int main(){

    Binary stack;
    stack.top=-1;
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    while(n>1){

        stack.number[stack.top+1]=n%2;
        n/=2;
        stack.top++;

        if (n==1){
            stack.number[stack.top+1]=1;
            stack.top++;
            n--;
        }
    }

    printf("Numero em binario: ");

    while(stack.top>-1){

        printf("%d",stack.number[stack.top]);
        stack.top--;
    }

    return 0;
}
