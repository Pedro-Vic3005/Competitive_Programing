#include <stdio.h>

int main(){

    int colors, blocks;
    scanf("%d %d", &blocks, &colors);

    int Matrix[colors][blocks];
    //create_matrix with 0:
    for(int i = 0; i < colors; i++){
        for(int j = 0; j < blocks; j++){
            Matrix[i][j] = 0;
        }
    }
    //Read_values:
    for(int i = 0; i < blocks; i++){
        int A, B;
        scanf("%d %d", &A, &B);
        Matrix[B - 1][i] = A;
    }
    //sort_lines:
    int c,d;
    for(int i = 0,value=0; i < colors; i++,value++){

        c=value; d=value+1;
        int j=0;
        while (j<blocks){

            if (Matrix[i][d]==0 && d<blocks) {
                d++;
            }

            if (Matrix[i][c]==0){
                c++;
            }

            if (Matrix[i][c]>Matrix[i][d] && Matrix[i][d]!=0 && Matrix[i][c]!=0){
                int temp = Matrix[i][d];
                Matrix[i][d] = Matrix[i][c];
                Matrix[i][c] = temp;
                if (c!=value){
                    while (Matrix[i][c]==0){
                        c-=2;
                    }
                    while (Matrix[i][d]==0){
                        d-=2;
                    }
                }
                else{
                    d++;
                    while (Matrix[i][c]==0){
                        c++;
                    }
                    if (Matrix[i][c]>Matrix[i][d] && Matrix[i][d]!=0 && Matrix[i][c]!=0) {
                        temp = Matrix[i][c];
                        Matrix[i][c] = Matrix[i][d];
                        Matrix[i][d] = temp;
                        c++;
                    }
                    while (Matrix[i][d]==0){
                        if (d>=blocks-1){
                            break;
                        }
                        d++;
                    }
                }
            }
            j++;
        }
    }
//create_vector:
    int Vect[blocks];
    //Allocate first line in vector:
    for(int i = 0; i < blocks; i++){
        Vect[i] = Matrix[0][i];
    }
    //take arguments to the vector:
    for(int i = 0; i < blocks; i++){
        if(Vect[i] == 0){
            for(int j = 0; j < colors; j++){
                if(Matrix[j][i] != 0){
                    Vect[i] = Matrix[j][i];
                }
            }
        }
    }
    //verify they are in order:
    int i,j;
    for (i=0,j=1;j<blocks;i++,j++){
        if (Vect[i]>Vect[j]){
            printf("N");
            break;
        }
    }
    if (j==blocks){
        printf("Y");
    }

    return 0;
}