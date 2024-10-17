#include <stdio.h>
#include <stdlib.h>

void min_and_max (int *x,int *i, int *j){

    int low=1000,high=-1;
    int c;
    for (c=0; c < sizeof(x)-1;c++){
        if (*(x+c)>high){
            high=*(x+c);
        }
        if (*(x+c)<low){
            low=*(x+c);
        }
    }
    *j=high;
    *i=low;
}

void read_vector(int *x){

    int i,n;
    for(i=0;i<7;i++){
        scanf("%d",&n);
        *(x+i)=n;
    }
}

int main (){

    int *vector;
    vector=(int*)malloc(7*sizeof(int));
    int min,max;

    read_vector(vector);

    min_and_max(vector,&min,&max);

    printf("O valor minímo: %d. O valor máximo: %d",min,max);

}