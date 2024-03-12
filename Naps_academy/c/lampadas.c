#include <stdio.h>

int main(){

    int lamp1,lamp2,q,c,n;
    lamp1=1;
    lamp2=1;
    c=0;

    scanf("%d",&q);

    while(c<q){
        scanf("%d",&n);
        if(n==1){
            lamp1+=1;
            c+=1;
        }
        if(n==2){
            lamp2+=1;
            lamp1+=1;
            c+=1;
        }
    }
    if(lamp1%2==0){
        lamp1=1;
    }
    else{
        lamp1=0;
    }
    if(lamp2%2==0){
        lamp2=1;
    }
    else{
        lamp2=0;
    }
    printf("%d\n",lamp1);
    printf("%d\n",lamp2);

    return 0;
}
