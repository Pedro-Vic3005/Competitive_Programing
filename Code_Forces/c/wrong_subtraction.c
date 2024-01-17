#include <stdio.h>

int main(){

    int n,d,c;
    c=1;

    scanf("%d",&n);
    scanf("%d",&d);

    while(c<=d){

        if(n%10==0){
            n/=10;
            c+=1;
        }
        else if(n%10!=0){
            n-=1;
            c+=1;
        }
    }
    printf("%d\n",n);
    return 0;



}