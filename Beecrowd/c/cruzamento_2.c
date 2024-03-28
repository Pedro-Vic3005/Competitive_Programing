#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int c;

    int * P =  malloc(sizeof(int) * N);
    int * M =  malloc(sizeof(int) * N);
    int * F1 =  malloc(sizeof(int) * N);
    int * F2 =  malloc(sizeof(int) * N);
    scanf("%d %d", &N, &c);

    for(int i = 0; i < N; i++){
        scanf("%d", P+i);
    }
    for(int i = 0; i < N; i++){
        scanf("%d", M+i);
    }

    for(int i = 0; i < N; i++){
        if (i < c){
            *(F1+i) = *(P+i);
            *(F2+i) = *(M+i);
        } else{
            *(F1+i) = *(M+i);
            *(F2+i) = *(P+i);
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d", *(F1+i));
        if (i < N - 1){
            printf(" ");
        }
    }
    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%d", *(F2+i));
        if (i < N - 1){
            printf(" ");
        }
    }
    free(P);
    free(M);
    free(F1);
    free(F2);
    return 0;
}
