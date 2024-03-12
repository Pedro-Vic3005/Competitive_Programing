#include <stdio.h>

int main (){

    int soma,numerador,denominador,I,J,c;
    float i,j;

    scanf("%d",&soma);

    if (soma==3 || soma==4 || soma==6){
        numerador=1;
        denominador=soma-1;
    }

    for (j=1;j<soma;j++){
        for (i=1;i<soma;i++){
            J=j;
            I=i;
            for (c=2;c<=j;c++){
                if (J%c==0 && I%c==0){
                    break;
                }
                else{
                    if (i+j==soma && j<i && j/i>0){
                        numerador=j;
                        denominador=i;
                    }
                }
            }
        }
    }
    printf("%d %d",numerador,denominador);

    return 0;
}
