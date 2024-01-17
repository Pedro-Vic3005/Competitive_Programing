#include <stdio.h>

int main(){

    char numero_s ;
    int contador,numero_i;
    contador=1;
    while ((numero_s = getchar()) != '\n') {

        numero_i = numero_s - '0';

        if (numero_i!=4 && numero_i!=7){
            contador*=-1;
            break;
        }
        else{
            contador*=1;
        }

    }
    if (contador>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}