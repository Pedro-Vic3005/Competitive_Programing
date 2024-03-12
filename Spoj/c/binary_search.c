#include <stdio.h>

int main(){

    int j,i,quantidade_itens,quantidade_buscas,n,key;

    scanf("%d %d",&quantidade_itens,&quantidade_buscas);
    int itens[quantidade_itens];

    for (i=0;i<quantidade_itens;i++){
        scanf("%d",&itens[i]);
    }

    int low=itens[0];
    int high=itens[quantidade_itens-1];
    int mid=(high+low)/2;

    for (j=0;j<quantidade_buscas;j++){
        scanf("%d",&key);

        while (low<=high){

            if (itens[mid]<key){
                low=mid+1;
            }
            if (itens[i]==key){
                printf("%d",i);
            }
            if (itens[i]>key){
                high=mid-1;
            }
            else{
                printf("-1");
            }
        }
    }









    return 0;
}
