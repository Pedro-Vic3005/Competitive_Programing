#include <stdio.h>

int main(){

    int l,b,c;
    c=0;

    scanf("%d",&l);
    scanf("%d",&b);

    while(l<=b){

        l*=3;
        b*=2;
        c+=1;
    }
    printf("%d\n",c);

}