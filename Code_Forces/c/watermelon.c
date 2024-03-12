//n=int(input())

//if n==2 or n%2!=0:
//print('NO')

//if n%2==0 and n!=2:
//print('YES')

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