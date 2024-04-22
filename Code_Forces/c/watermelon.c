#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    if (n==2 || n%2!=0){
        printf("NO");
    }
    if (n%2==0 && n!=2){
        printf("YES");
    }
    return 0;
}