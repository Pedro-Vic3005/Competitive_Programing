#include <stdio.h>
#include <string.h>

int main () {

    int i, quantidade;
    char nome[1000];

    scanf("%d", &quantidade); getchar();

    for (i = 0; i < quantidade; i++) {
        scanf("%s", nome);

        int j= strlen(nome)-1;

        if (nome[j] == 'o') {
            printf("FILIPINO\n");
        }
        if (nome[j] == 'u') {
            printf("JAPANESE\n");
        }
        if (nome[j] == 'a') {
            printf("KOREAN\n");
        }
    }
    return 0;
}