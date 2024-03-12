#include <stdio.h>

int main() {

    int h, p, f, d;
    scanf("%d %d %d %d",&h, &p, &f, &d);

    if (d == -1){
        if (h<f){
            while (f>=0){
                if (f==h){
                    printf("S");
                    break;
                }
                if (f==p){
                    printf("N");
                    break;
                }
                else{
                    f-=1;
                }
            }

        }

        if (h>f){
            while(h>=0){
                if (h==p){
                    printf("S");
                    break;
                }
                if (h==f){
                    printf("N");
                    break;
                }
                else{
                    h-=1;
                }
            }
        }
    }
    else{
        if (h<f){
            while (h<=15){
                if (h==p){
                    printf("S");
                    break;
                }
                if (h==f){
                    printf("N");
                    break;
                }
                else{
                    h+=1;
                }
            }
        }
        if (h>f){
            while (f<=15){
                if (f==h){
                    printf("S");
                    break;
                }
                if (f==p){
                    printf("N");
                    break;
                }
                else{
                    f+=1;
                }
            }
        }
    }
}