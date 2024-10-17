#include <stdio.h>
#define TAM 10
typedef struct stack {
    int dados [TAM];
    int topo;
} Stack;

void inicialize (Stack* s) {
    s->topo = -1;    //  (*s).topo = -1;
}

int isEmpty (Stack s) {
    if (s.topo == -1) {
        return 1;
    }
    else {
        return 0;

    }
}

int isFull (Stack s) {
    if (s.topo == TAM-1) {
        return 1;
    }
    else  {
        return 0;
    }
}

void push (Stack* s, int valor) {
    s->topo = s->topo + 1;
    s->dados[s->topo] = valor;
}

int pop (Stack* s) {
    int retorno = s->dados[s->topo];
    s->topo = s->topo - 1;
    return retorno;
}

int top (Stack s) {
    return s.dados[s.topo];
}

#include <stdio.h>

void exibirOpcoes () {
    printf ("Opções \n");
    printf ("1 - Empilhar \n");
    printf ("2 - Desempilhar \n");
    printf ("3 - Ver topo \n");
    printf ("0 - Encerrar programa \n");
    printf ("Informe a opção desejada: ");
}

int main () {
    Stack pilha1;
    int num, op;

    inicialize(&pilha1);
    do {
        exibirOpcoes();
        scanf ("%d",&op);
        switch (op) {
            case 1: if (isFull (pilha1) == 1) {
                    printf ("Stack full! \n");
                }
                else {
                    printf ("Informe o valor a ser empilhado: ");
                    scanf ("%d",&num);
                    push (&pilha1,num);
                }
                break;
            case 2: if (isEmpty (pilha1) == 1) {
                    printf ("Stack empty! \n");
                }
                else {
                    num = pop (&pilha1);
                    printf ("Valor desempilhado: %d \n", num);
                }
                break;
            case 3: if (isEmpty (pilha1) == 1) {
                    printf ("Stack empty! \n");
                }
                else {
                    num = top (pilha1);
                    printf ("Valor no topo da pilha: %d \n", num);
                }
                break;
            case 0: printf ("Bye bye \n");
                break;
            default: printf ("Opção inválida \n");
        }
    } while (op != 0);
    return 0;
}