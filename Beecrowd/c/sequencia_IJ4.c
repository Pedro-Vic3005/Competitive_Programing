//ainda precisa terminar
#include <stdio.h>

int main(){

    double j=2.8,i;

    for (i=0;i<=2;i+=0.2){
        j-=1.8;
        int c=1;
        while (c<4){

            if (i==1 || i==0  || i==2){
                printf("I=%.0lf ",i);
            }
            else{
                printf("I=%.1lf ",i);
            }

            if (j==1 || j==2 || j==3 || j==4 || j==5){
                printf("J=%.0lf\n",j);
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

