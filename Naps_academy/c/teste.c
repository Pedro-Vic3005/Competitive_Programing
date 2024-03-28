#include <stdio.h>
#include <string.h>

//int main (){
//    int array[4],a=sizeof (array)/sizeof(array[0]);


//    printf("%d",a);

//    return 0;
//}

int main(){

    char nome[5];

    scanf("%s",nome);

    for (int i=0; i<4;i++){
        printf("%c",nome[i]);
    }
    printf("|");
    return 0;
}