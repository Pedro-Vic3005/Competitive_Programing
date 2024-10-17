#include <stdio.h>

void sort_and_print(int size, int vector[]);

int main(){

    int total_position,sizeL,sizeR,i;

    scanf("%d %d",&sizeL,&sizeR);

    int vectorFinal[sizeL+sizeR],vectorR[sizeR],vectorL[sizeL];

    for (i=0;i<sizeL;i++){
        scanf("%d",&vectorL[i]);
        vectorFinal[i]=vectorL[i];
    }

    for (total_position=sizeL,i=0;i<sizeR;i++,total_position++){
        scanf("%d",&vectorR[i]);
        vectorFinal[total_position]=vectorR[i];
    }

    sort_and_print(sizeL,vectorL);
    sort_and_print(sizeR,vectorR);
    sort_and_print(sizeR+sizeL,vectorFinal);

    return 0;
}

void sort_and_print(int size, int vector[]){

    int i,j,temp;

    for (i=0,j=1;i<size-1;i++,j++){
        if (vector[i]>vector[j]) {
            temp=vector[i]; vector[i]=vector[j]; vector[j]=temp;
            if (i!=0) {
                i-=2;
                j-=2;
            }
        }
    }

    for (i=0;i<size;i++) {
        printf("%d", vector[i]);
        if (i != size-1) {
            printf(", ");
        }
    }
    printf("\n");
}