#include <stdio.h>

int main(){

    int p,r;
    scanf("%d %d" , &p, &r);

    if (p==0){
        printf("C");
    }
    if (p==1 && r==1 ){
        printf("A");
    }
    if (p==1 && r==0 ){
        printf("B");
    }

    return 0;
}
