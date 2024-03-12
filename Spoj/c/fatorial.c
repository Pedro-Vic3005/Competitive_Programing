#include <stdio.h>

int main(){

    int n,fatorial=1;

    scanf("%d",&n);
    while (n>0){
        fatorial*=n;
        n-=1;
    }
    printf("%d",fatorial);
    return 0;
}