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

int diamonds(char *s){
    int diamonds = 0;
    Stack *stack = Stack_Create();

    for (int i = 0; s[i] != '\n'; i++){
        if (s[i] != '<' && s[i] != '>'){
            continue;
        }
        if (s[i] == '<'){
            Stack_Push(stack, s[i]);
        }
        else{
            Stack_Pop(stack);
            diamonds++;
        }
    }

    return diamonds;
}
int main(){
    int n;
    char s[1001];
    scanf("%d", &n);
    getchar();

    while (n--){
        fgets(s, 1001, stdin);


    }
}