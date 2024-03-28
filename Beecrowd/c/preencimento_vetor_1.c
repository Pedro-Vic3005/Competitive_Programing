#include <stdio.h>

int main (){

    int j,valor,i;

    scanf("%d",&valor);

    for(i=0,j=0;i<1000;i++,j++){
        printf("N[%d] = %d\n",i,j);
        if (j==valor-1){
            j=-1;
        }
    }

    return 0;
}
