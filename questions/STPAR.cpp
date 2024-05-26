#include <bits/stdc++.h>
using namespace std;

struct elemento{
    int value;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento* Stack;

Stack * Stack_Create(){
    Stack* stack = (Stack *) malloc(sizeof(Stack));
    if (stack != NULL){
        *stack = NULL;
    }

    return stack;
}

void Stack_Destroy(Stack * stack){
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

bool Stack_IsEmpty(Stack * stack){
    if (stack == NULL){
        return 1;
    }
    if (*stack == NULL){
        return 1;
    }
    return 0;
}

void Stack_Push(Stack * stack, int value){
    if (stack == NULL){
        return;
    }
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if (no == NULL){
        return;
    }
    no->value = value;
    no->prox = (*stack);
    *stack = no;
    return;
}

int Stack_Pop(Stack * stack){
    Elem *no = *stack;
    int remValue = no->value;
    (*stack) = no->prox;
    free(no);
    return remValue;
}

int Stack_Peek(Stack * stack){
    if (stack == NULL){
        return 0;
    }
    if ((*stack) == NULL){
        return 0;
    }
    return (*stack)->value;
}

int partition (int * arr,int low, int high){
  int pivot = arr[high];
  int i = (low-1);

  for (int j = low; j <= high; j++){
    if (arr[j] < pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[high]);

  return (i+1); 
}

void quick_sort(int * arr,int low, int high){
  if (low < high){
    int pi = partition(arr, low, high);
    quick_sort(arr ,low, pi-1);
    quick_sort(arr ,pi+1, high);
  }
}

int Verify (int * push, int *pop, int size){
    Stack *no = Stack_Create();
    int PopIdx = 0;
    int PushIdx = 0;
    Stack_Push(no, push[PushIdx++]);
    
    while (PopIdx < size){
        
        while (Stack_Peek(no) != pop[PopIdx] && PushIdx < size){
            Stack_Push(no, push[PushIdx]);
            PushIdx++;
        }
        
        if (Stack_Peek(no) == pop[PopIdx]){
            Stack_Pop(no);
            PopIdx++;
        }
        else{
            return 0;
        }
    }
    
    return Stack_IsEmpty(no);
}
int main(){
    int n;
    scanf("%d", &n);
    
    while (n != 0){
        int push[n], pop[n];
        
        for (int i = 0; i < n; i++){
            scanf("%d", &push[i]);
            pop[i] = push[i];
        }
        
        quick_sort(pop, 0, n-1);
        
        if (Verify(push, pop, n)){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        scanf("%d", &n);
    }
    
    return 0;
}
