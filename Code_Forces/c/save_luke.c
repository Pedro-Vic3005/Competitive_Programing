#include <stdio.h>

int main(){
    float d,L,v1,v2;
    scanf("%f %f %f %f", &d,&L,&v1,&v2);
    double tempo=(L-d)/(v1+v2);
    printf("%.20f",tempo);
    return 0;
}
