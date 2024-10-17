#include <stdio.h>
#include <string.h>

typedef struct word{
    char list[20];
    char copy[20];
    int last;
}Word;

int main(){

    Word sentence;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s",sentence.list);

    sentence.last=strlen(sentence.list)-1;

    for(i=strlen(sentence.copy);i<strlen(sentence.list);i++){

        sentence.copy[i]=sentence.list[sentence.last];

        if (sentence.copy[i]!=sentence.list[i]){
            break;
        }

        sentence.last--;
    }

    if (i<strlen(sentence.list)){
        printf("Não é um palíndromo!\n");
    }
    else{
        printf("É um palíndromo!");
    }

    return 0;
}