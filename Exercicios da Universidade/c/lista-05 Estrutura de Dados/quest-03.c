#include <stdio.h>
#include "../stack_char.h"
#define size 50

int main(){

    Stack palindrome;
    inicializar(&palindrome);
    char word[size],verify[size];
    int j,i;

    printf("Digite uma palavra: ");
    fgets(word,size,stdin);

    for(i=0;i<sizeof(word);i++){

        if (word[i]!='\0'){
            push(&palindrome,word[i]);
        }
    }

    i=0;
    while (isEmpty(palindrome)!=1){

        char aux=pop(&palindrome);

        if (aux!='\0'){
            verify[i]=aux;
            i++;
        }
    }

    for(i=0,j=1;word[i]!='\n';i++,j++) {

        if (verify[j]!=word[i]){
            printf("Não é palíndroma!\n");
            break;
        }
    }

    if(word[i]=='\n'){
        printf("É palíndroma!\n");
    }

    return 0;
}