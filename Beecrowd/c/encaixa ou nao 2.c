#include <stdio.h>
#include <string.h>

int main(){

    int i,cases;

    scanf("%d",&cases);

    for (i=0;i<cases;i++){

        char A[1000],B[1000];

        scanf("%s %s",A,B);

        if (strlen(A)<strlen(B)){
            printf("nao encaixa\n");
        }

        else{
            int c,d,answer=0;
            for (c=strlen(A)-1,d=strlen(B)-1;d>-1;c--,d--){
                if (A[c]!=B[d]){
                    answer++;
                }
            }

            if (answer==0){
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}