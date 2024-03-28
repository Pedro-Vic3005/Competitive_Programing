#include <stdio.h>

int main(){

    int n,c,i;
    scanf("%d %d",&n,&c);

    int p1[n],p2[n],p_2[n];

    for (i=0;i<n;i++){
        scanf("%d",&p1[i]);
    }

    for (i=0;i<n;i++){
        scanf("%d",&p2[i]);
        p_2[i]=p2[i];
    }

    for (i=c;i<n;i++){
        p_2[i]=p1[i];
        p1[i]=p2[i];
    }

    for (i=0;i<n;i++){
        printf("%d",p1[i]);
        if (i < n-1){
            printf(" ");
        }
    }
    printf("\n");

    for (i=0;i<n;i++) {
        printf("%d", p_2[i]);
        if (i < n-1 ) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
