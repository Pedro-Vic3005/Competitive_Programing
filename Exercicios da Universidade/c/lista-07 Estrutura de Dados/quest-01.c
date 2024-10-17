#include <stdio.h>
#include <string.h>
#include "../queue_string.h"

int main(){

    Queue * dictionary;
    inicializar(&dictionary);

    char name[20]="pedro";
    enQueue(&dictionary,name);
    strcpy(name,"leandrinha");
    enQueue(&dictionary,name);
    strcpy(name,"kristina");
    enQueue(&dictionary,name);
    strcpy(name,"daniela");
    enQueue(&dictionary,name);


    list(&dictionary);

    cancel(&dictionary,"leandrinha");
    list(&dictionary);

    cancel(&dictionary,"daniela");
    list(&dictionary);

    cancel(&dictionary,"kristina");

    list(&dictionary);

    return 0;
}