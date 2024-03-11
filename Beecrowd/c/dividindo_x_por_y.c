#include <stdio.h>

int main(){

    int i,quantidade;
    float n1,n2,resposta;

    scanf("%d",&quantidade);

    float primeiro_digito[quantidade];
    float segundo_digito[quantidade];

    for (i=0; i<quantidade;i++){
        scanf("%f %f",&n1,&n2);

        primeiro_digito[i]=n1;
        segundo_digito[i]=n2;
    }

    for (i=0;i<quantidade;i++){
        if (segundo_digito[i]==0){
            printf("divisao impossivel\n");
        }
        else{
            resposta=primeiro_digito[i]/segundo_digito[i];
            printf("%.1f\n",resposta);
        }
    }

    return 0;
}
