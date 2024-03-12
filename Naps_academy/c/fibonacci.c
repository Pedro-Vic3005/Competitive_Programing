//1,1,2,3,5,8,13,21,34,55,89,144,233,377
#include <stdio.h>

int main(){

    int posicao, primeiro_numero, segundo_numero, terceiro_numero;
    primeiro_numero=1;
    segundo_numero=1;

    scanf("%d",&posicao);

    if (posicao==0 || posicao==1){
        printf("1");
    }

    else {
        while (posicao >= 2) {
            terceiro_numero = primeiro_numero + segundo_numero;
            primeiro_numero = segundo_numero;
            segundo_numero = terceiro_numero;
            posicao -= 1;
        }

        printf("%d", terceiro_numero);
    }
    return 0;
}

