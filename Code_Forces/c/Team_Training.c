#include <stdio.h>

int main(){

    int equipes,experientes,novatos,i=0;
    scanf("%d %d",&experientes,&novatos);
    equipes=0;

    if (novatos==0 || experientes==0 || (novatos==1 && experientes==1)){
        printf("%d",equipes);
    }

    else{
        if (novatos>=experientes){
            while (i==0){
                experientes-=1;
                novatos-=2;
                equipes+=1;
                if ((novatos+experientes)<3 || novatos==0 || experientes==0){
                    break;
                }
                if (experientes>novatos){
                    experientes-=2;
                    novatos-=1;
                    equipes+=1;
                }
                if ((novatos+experientes)<3 || novatos==0 || experientes==0){
                    break;
                }


            }
        }
        else{
            while (i==0){
                experientes-=2;
                novatos-=1;
                equipes+=1;
                if ((novatos+experientes)<3 || novatos==0 || experientes==0){
                    break;
                }
                if (novatos>experientes){
                    experientes-=1;
                    novatos-=2;
                    equipes+=1;
                }
                if ((novatos+experientes)<3 || novatos==0 || experientes==0){
                    break;
                }
            }
        }
        printf("%d",equipes);
    }
    return 0;

}