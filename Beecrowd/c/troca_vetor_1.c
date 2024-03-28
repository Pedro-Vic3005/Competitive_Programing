#include <stdio.h>

int main(){

    int i,numero[20];

    for (i=19;i>-1;i--){
        scanf("%d",&numero[i]);
    }

    for (i=0;i<20;i++){
        printf("N[%d] = %d\n",i,numero[i]);
    }
    return 0;
}
