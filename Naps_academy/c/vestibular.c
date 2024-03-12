#include <stdio.h>

int main(){

    int quantidade,pontos=0;

    scanf("%d\n",&quantidade);

    char gabarito[quantidade];
    char respostas[quantidade];

    scanf("%s",gabarito); getchar();

    scanf("%s",respostas); getchar();

    for (int i=0; i<quantidade; i++){
        if (gabarito[i]==respostas[i]){
            pontos+=1;
        }
    }
    printf("%d\n",pontos);

    return 0;

}