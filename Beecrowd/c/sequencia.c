#include <stdio.h>

int main(){

    int quantidade_linha, limite,n=1,i;
    scanf("%d %d",&quantidade_linha,&limite);

    while (n!=limite+1){
        printf("%d",n);
        if (n%quantidade_linha==0){
            printf("\n");
        }
        else{
            printf(" ");
        }
        n++;
    }
    return 0;
}