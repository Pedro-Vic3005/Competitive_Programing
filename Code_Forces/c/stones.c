#include <stdio.h>

int main(){
    char primeira_pedra,pedra;
    int quantidade,resultado=0;
    scanf("%d",&quantidade);

    scanf("%c",&primeira_pedra);
    while(quantidade>0){
        scanf("%c",&pedra);
        if (pedra==primeira_pedra){
            resultado+=1;
        }
        else{
            break;
        }
        quantidade-=1;
    }

    printf("%d",resultado);

    return 0;
}
