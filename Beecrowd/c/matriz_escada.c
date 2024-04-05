#include <stdio.h>
#define true 1
#define false 0

int main(){

    int p=0,numero,quant_zero,linha,coluna,quant_linha,quant_coluna;

    _Bool bool,check=true;

    scanf("%d %d",&quant_linha,&quant_coluna);

    for (linha=0;linha<quant_linha;++linha) {
        quant_zero=0;
        bool=true;

        for (coluna=0;coluna<quant_coluna;++coluna) {
            scanf("%d",&numero);
            if (numero==0 && bool){
                quant_zero++;
            }
            else{
                bool = false;
            }
        }

        if (linha != 0){
            if ((quant_zero>p || (quant_zero==p && quant_zero==quant_coluna)) && check) {
                p=quant_zero;
            }

            else {
                p = 0;
                check = false;
            }
        }

        else{
            p = quant_zero;
        }
    }

    if (p){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}