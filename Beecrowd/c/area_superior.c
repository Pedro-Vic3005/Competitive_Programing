#include <stdio.h>

int main(){

    double soma=0,matriz[12][12];
    int i,j,limite_esq,limite_dir;
    char opration;

    scanf("%c",&opration);

    for (limite_esq=0,limite_dir=11,i=0;i<12;i++,limite_esq++,limite_dir--){
        for (j=0;j<12;j++){
            scanf("%lf",&matriz[i][j]);
            if (i<5 && limite_esq<j && j<limite_dir){
                soma+=matriz[i][j];
            }
        }
    }

    if (opration=='M'){
        printf("%.1lf",soma/30);
    }
    else{
        printf("%.1lf",soma);
    }
    printf("\n");

    return 0;
}


