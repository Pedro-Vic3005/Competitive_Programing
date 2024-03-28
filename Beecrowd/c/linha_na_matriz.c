#include <stdio.h>

int main(){

    float soma=0,matriz[12][12];
    int i,j,coluna;
    char opration;

    scanf("%d",&coluna);
    scanf("%c",&opration);
    scanf("%c",&opration);

    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf("%f",&matriz[i][j]);
            if (j==coluna){
                soma+=matriz[i][j];
            }
        }
    }

    if (opration=='M'){
        printf("%.1f",soma/12);
    }
    else{
        printf("%.1f",soma);
    }
    printf("\n");

    return 0;
}
