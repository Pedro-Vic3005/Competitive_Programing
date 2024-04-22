#include <stdio.h>

int main (){

    int n=9,i,j;

    int *ponteiro;
    ponteiro=&n;

    printf("%d\n",n);
    printf("%p\n",&n);
    printf("%d\n",*ponteiro); //*ponteiro : aponta o valor da variavel que ponteiro aponta
    printf("%p\n",ponteiro);  //ponteiro: mostra o conteudo do ponteiro (endereco da variavel q ele aponta)
    printf("%p\n",&ponteiro); //&ponteiro: mostra o endereco do ponteiro
    printf("\n\n");

    *ponteiro=3005; //mudA o valor da variavel a qual o ponteiro aponta

    printf("%d\n",n);
    printf("%p\n",&n);
    printf("%d\n",*ponteiro); //*ponteiro : aponta o valor da variavel que ponteiro aponta
    printf("%p\n",ponteiro);  //ponteiro: mostra o conteudo do ponteiro (endereco da variavel q ele aponta)
    printf("%p\n",&ponteiro); //&ponteiro: mostra o endereco do ponteiro
    printf("\n\n");

    printf("Esdereço de i: %p\n",&i);
    printf("Esdereço de j: %p",&j);

    return 0;
}
