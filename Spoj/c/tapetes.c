#include <stdio.h>

int main(){

    long long tamanho_tubo,quantidade_tapetes,soma;

    scanf("%lld %lld",&tamanho_tubo,&quantidade_tapetes);

    soma=(tamanho_tubo-(quantidade_tapetes-1))*(tamanho_tubo-(quantidade_tapetes-1))+(quantidade_tapetes-1);

    printf("%lld",soma);

    return 0;
}
