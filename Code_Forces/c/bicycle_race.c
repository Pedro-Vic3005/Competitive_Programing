#include <stdio.h>

int main (){

    int danger=0,i,pontos,x,y,posicao_y_anterior,posicao_x_anterior;
    char direction='O';

    scanf("%d",&pontos);
    scanf("%d %d",&posicao_x_anterior,&posicao_y_anterior);

    for(i=0;i<pontos;i++) {
        scanf("%d %d", &x, &y);

        if (direction=='O' && posicao_y_anterior<y){
            direction='N';
        }
        else if (direction=='N' && posicao_x_anterior<x){
            direction='L';
        }
        else if (direction=='L' && posicao_y_anterior<y){
            direction='N';
            danger++;
        }
        else if (direction=='N' && posicao_x_anterior>x){
            direction='O';
            danger++;
        }
        else if (direction=='O' && posicao_y_anterior>y){
            direction='S';
            danger++;
        }
        else if (direction=='S' && posicao_x_anterior<x){
            direction='L';
            danger++;
        }
        else if (direction=='L' && posicao_y_anterior>y){
            direction='S';
        }
        else if (direction=='S' && posicao_x_anterior>x){
            direction='O';
        }

        posicao_y_anterior = y;
        posicao_x_anterior = x;
    }
    printf("%d",danger);


    return 0;
}
