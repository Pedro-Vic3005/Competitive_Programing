//ainda precisa terminar
#include <stdio.h>

int main(){

    double j=2.8,i;

    for (i=0;i<2.1;i+=0.2){
        j-=1.8;
        int c=1;
        while (c<4){
            //printf("%.2f\n",j);
            if (i!=1 && i!=0 && i!=2){
                printf("I=%.1lf ",i);
            }
            else{
                printf("I=%.0lf ",i);
            }

            if (j!=1.0 && j!=2.0 && j!=3.0 && j!=4.0 && j!=5.0){
                printf("J=%.1lf\n",j);
            }
            else{
                printf("J=%.0lf\n",j);
            }
            j++;
            c++;
        }
        j--;
    }

    return 0;
}

