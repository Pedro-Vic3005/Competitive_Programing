#include <stdio.h>
#include <stdlib.h>

typedef struct characteristics{
    char sex;
    float height;
    int age;
    char color_of_eye;
}ch;

int main(){

    int i,population;

    scanf("%d",&population);

    ch *array=(ch*) malloc (population*sizeof(ch));

    int max_age=-1,special_women=0;
    float man=0,amount_brown_small=0,sum_age=0;

    for (i=0;i<population;i++){

        scanf(" %c %f %d %c",&array->sex,&array->height,&array->age,&array->color_of_eye);

        if (array->color_of_eye=='c' && array->height>1.60){
            amount_brown_small++;
            sum_age+=array->age;
        }

        if (array->sex=='h' && array->age>max_age){
            max_age=array->age;
        }

        if (array->sex=='h'){
            man++;
        }

        if (array->sex=='m' && ((array->color_of_eye=='v' && array->height<1.70) || (array->age>20 && array->age<45))){
            special_women++;
        }

        array++;
    }

    if (amount_brown_small > 0) {
        printf("A média de idade de pessoas com olhos castanhos e altura superior a 1.60 m: %.2f\n", sum_age / amount_brown_small);
    } else {
        printf("Não há pessoas com olhos castanhos e altura superior a 1.60 m para calcular a média de idade.\n");
    }
    printf("A maior idade entre os homens: %d\n",max_age);
    printf("A quantidade de pessoas do sexo feminino cuja idade esteja entre 20 e 45 anos ou que tenham olhos verdes e altura inferior a 1.70 m: %d\n",special_women);
    printf("O Percentual dos homens: %.2f%%\n",(man/population)*100);

    return 0;
}