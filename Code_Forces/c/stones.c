#include <stdio.h>
#include <string.h>

int main(){

    int quantidade = 0,resultado=0;

    scanf("%d\n",&quantidade);

    char pedras[quantidade];
    fgets(pedras,quantidade+1,stdin);
    for (int i=0; i<quantidade-1; i++ ){
        if (pedras[i]==pedras[i+1]){
            resultado++;
        }

    }

    printf("%d\n",resultado);


    return 0;
}
