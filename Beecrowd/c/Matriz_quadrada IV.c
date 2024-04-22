#include <stdio.h>

int main (){

    int i,j,size,separador;

    while(scanf("%d",&size) !=EOF){

        int matrix[size][size];

        for (i=0;i<size;i++){
            for (j=0;j<size;j++){
                matrix[i][j]=0;
            }
        }

        for (i=size/3;i<=size/2+(size/2-size/3);i++){
            for (j=size/3;j<=size/2+(size/2-size/3);j++){
                if (i==size/2 && j==size/2){
                    matrix[i][j]=4;
                }
                else{
                    matrix[i][j]=1;
                }
            }
        }

        for (separador=size-1,i=0;i<size/3;i++,separador-=2){
            for (j=0;j<size/3;j++){
                if (i==j){
                    matrix[i][j]=2;
                    matrix[i+separador][j+separador]=2;
                    matrix[i+separador][j]=3;
                    matrix[i][j+separador]=3;
                }
            }
        }
        for (i=0;i<size;i++){
            for (j=0;j<size;j++){
                printf("%d",matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
