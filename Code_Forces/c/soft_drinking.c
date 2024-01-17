#include <stdio.h>

int main(){

    int amigos, garrafas, mililitros_garrafa, limao, fatias, sal_total, mililitos_bebida, sal_bebida;
    scanf("%d %d %d %d %d %d %d %d", &amigos,&garrafas,&mililitros_garrafa,&limao,&fatias,&sal_total,&mililitos_bebida,&sal_bebida);

    int  resultado_garrafa = (garrafas * mililitros_garrafa-((garrafas * mililitros_garrafa) % mililitos_bebida))/mililitos_bebida;
    int resultado_limao = limao * fatias;
    int resultado_sal = sal_total / sal_bebida;

    int i=0;
    while( i==0){
        if (resultado_limao<resultado_garrafa){
            if (resultado_sal<resultado_limao){
                printf("%d",resultado_sal/amigos);
                break;
            }
            else{
                printf("%d",resultado_limao/amigos);
                break;
            }
        }
        else{
            if (resultado_garrafa<resultado_sal){
                printf("%d",resultado_garrafa/amigos);
                break;
            }
            else{
                printf("%d",resultado_sal/amigos);
                break;
            }
        }
    }
    return 0;
}