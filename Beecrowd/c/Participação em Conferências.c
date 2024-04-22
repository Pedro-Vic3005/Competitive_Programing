#include <stdio.h>

int main (){

    int c,i,j,rows,columns;

    scanf("%d %d",&rows,&columns);

    int matrixT[columns][rows],matrixC[rows][rows],matrix[rows][columns];

    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
            matrixT[j][i]=matrix[i][j];
        }
    }

    for (i=0;i<rows;i++){
        for (j=0;j<rows;j++){
            matrixC[i][j]=0;
        }
    }

    for (i=0;i<rows;i++){
        for (c=0;c<rows;c++){
            for (j=0;j<columns;j++){
                matrixC[i][c]+=matrix[i][j] * matrixT[j][c];
            }
        }
    }

    for (i=0;i<rows;i++){
        for (j=0;j<rows;j++){
            printf("%8d",matrixC[i][j]);
            if (j<rows-1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}