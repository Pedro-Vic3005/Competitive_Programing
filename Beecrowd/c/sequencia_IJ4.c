//ainda precisa terminar
#include <stdio.h>

int main(){

    double j=2.8,i;

    for (i=0;i<=2;i+=0.2){
        j-=1.8;
        int c=1;
        while (c<4){

            if (i==(int)i){
                printf("I=%d ",(int)i);
            }
            else{
                printf("I=%.1lf ",i);
            }

            if (j==(int)j){
                printf("J=%d\n",(int)j);
            }
            else{
                printf("J=%.1lf\n",j);
            }
            j++;
            c++;
        }
        j--;
    }

    return 0;
}

