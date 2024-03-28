
#include <stdio.h>

int main(){

    int i,j,size,ponto_ref;

    while (size>=0){
        if (size==0){
            break;
            printf("fim");
        }
        scanf("%d",&size);

        int separador,separador_2,matriz[size][size];

        if (size%2==0 && size!=0){
            ponto_ref=size/2;

            for (separador_2=1,i=ponto_ref-1;i>-1;separador_2+=2,i--){
                for (separador=1,j=ponto_ref-1;j>-1;separador+=2,j--){
                    if (i>=j){
                        matriz[i][j]=j+1;
                        matriz[i][j+separador]=j+1;
                        matriz[i+separador_2][j]=j+1;
                        matriz[i+separador_2][j+separador]=j+1;
                    }
                    else{
                        matriz[i][j]=i+1;
                        matriz[i][j+separador]=i+1;
                        matriz[i+separador_2][j]=i+1;
                        matriz[i+separador_2][j+separador]=i+1;
                    }
                }
            }
        }
        else{
            ponto_ref=size/2+1;
            matriz[size/2][size/2]=ponto_ref;
            for (separador_2=0,i=ponto_ref-1;i>-1;separador_2+=2,i--){
                for (separador=0,j=ponto_ref-1;j>-1;separador+=2,j--){
                    if (i>=j){
                        matriz[i][j]=j+1;
                        if (matriz[i][j]==ponto_ref){
                            break;
                        }
                        matriz[i][j+separador]=j+1;
                        matriz[i+separador_2][j]=j+1;
                        matriz[i+separador_2][j+separador]=j+1;
                    }
                    else{
                        matriz[i][j]=i+1;
                        matriz[i][j+separador]=i+1;
                        matriz[i+separador_2][j]=i+1;
                        matriz[i+separador_2][j+separador]=i+1;
                    }
                }
            }
            for (separador=2,j=1,i=size/2-1;i>-1;separador+=2,j++,i--){
                matriz[size/2][i]=ponto_ref-j;
                matriz[size/2][i+separador]=ponto_ref-j;
            }
        }
        for (i=0;i<size;i++){
            for (j=0;j<size;j++){

                if (j==0){
                    printf("%3d",matriz[i][j]);
                }
                else{
                    printf("%4d",matriz[i][j]);
                }
                if (j==size-1){
                    printf("\n");
                }
            }
            if (i==size-1){
                printf("\n");
            }
        }
    }
    return 0;
}


