#include <stdio.h>
#include <string.h>

int main(){

    char word[10][10];
    int i,j;
    char temp[80];

    for (i=0;i<10;i++){
        scanf("%s",word[i]);
    }

    for (i=0,j=1;i<9;i++,j++){

        int compare = strcmp(word[i],word[j]);
        /* strcmp > 0 --> word[i]>word[j]
         * strcmp == 0 --> word[i]==word[j]
         * strcmp < 0 --> word[i]<word[j]
         */
        if (compare>0) {
            strcpy(temp,word[i]);
            strcpy(word[i],word[j]);
            strcpy(word[j],temp);
            if (i!=0) {
                i-=2;
                j-=2;
            }
        }
    }

    for (i=0;i<10;i++){
        printf("%s\n",word[i]);
    }

    return 0;
}