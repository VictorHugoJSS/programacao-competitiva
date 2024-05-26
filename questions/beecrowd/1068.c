#include <stdio.h>
#include <stdlib.h>
typedef struct elemento* Stack;
typedef struct elemento Elem;

struct elemento{
    char parentesis;
    struct elemento *prox;
};

Stack * Stack_Create(){
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    if (stack != NULL){
        *stack = NULL;
    }

    return stack;
}

void Stack_Destroy(Stack *stack){
    if (stack != NULL){
        Elem* no;
        while ((*stack) != NULL){
            no = *stack;
            *stack = (*stack)->prox;
            free(no);
        }
        free(stack);
    }
}

int Stack_IsEmpty(Stack *stack){
    if (stack == NULL || *stack == NULL){
        return 1;
    }

    return 0;
}

void Stack_Push(Stack *stack, char parentesis){
    if (stack == NULL){
        return;
    }
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if (no == NULL){
        return;
    }
    no->parentesis = parentesis;
    no->prox = (*stack);
    *stack = no;
    return;
}

char Stack_Pop(Stack *stack){
    Elem *no = *stack;
    char charRemove = no->parentesis;
    (*stack) = no->prox;
    free(no);
    return charRemove;
}

int parentesis_check(char * expression){
    Stack *stack = Stack_Create();
    
    for (int i = 0; expression[i] != '\n'; i++){
        if (expression[i] != '(' && expression[i] != ')'){
            continue;
        }
        if (expression[i] == '('){
            Stack_Push(stack, expression[i]);
        }
        else if (Stack_IsEmpty(stack)){
            return 0;
        }
        else if (expression[i] ==')'){
            Stack_Pop(stack);
        }
    }
    return Stack_IsEmpty(stack);
}

int main(){
    char s[1000];

    while (fgets(s, 1000, stdin)){
        if (parentesis_check(s)){
            printf("correct\n");

        }
        else{
            printf("incorrect\n");
        }
    }
}