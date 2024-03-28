#include <stdio.h>

int main (){

    int c,i,casos,linhas,colunas,j;

    scanf("%d",&casos);

    for (c=0;c<casos;c++){

        scanf("%d %d",&linhas,&colunas);
        int quant_1=0,quant_0=0;
        char imagem[colunas];

        for (i=0;i<linhas;i++) {
            scanf("%s", imagem);
            for (j=0; j<colunas; j++) {
                if (i==0 || i==linhas-1){
                    if (imagem[j]=='0'){
                        quant_0+=1;
                    }
                }
                else{
                    if (j==0 || j==colunas-1){
                        if (imagem[j]=='0'){
                            quant_0+=1;
                        }
                    }
                    else{
                        if (imagem[j]=='1'){
                            quant_1+=1;
                        }
                    }
                }
            }
        }

        if (quant_1>=quant_0){
            printf("%d\n",quant_0);
        }
        else{
            printf("-1\n");
        }

    }

    return 0;
}




