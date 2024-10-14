#include <bits/stdc++.h>

using namespace std;


typedef struct{
  int q[100001];
  int n;
}p_queue;

int pq_parent(int n){
  if (n == 1){
    return -1;
  }
  return ((int) n/2);
}

int pq_child(int n){
  return (2*n+1);
}

void bubble_up(p_queue *arr, int p){
  if (pq_parent(p) == -1){
    return;
  }

  if(arr->q[pq_parent(p)] > arr->q[p]){
    
  }
}
void pq_insert(p_queue *arr, int x){
  if (arr->n >= 100001){
    printf("error\n");
  }
  else{
    arr->n = (arr->n)+1;
    arr->q[arr->n] = x;
    
  }
}

int main(){
    int n;
    p_queue arr;

    scanf("%d", &n);
    
    while (n--){
        int size;
        
        scanf("%d", &size);
        
        for (int i = 0; i < size; i++){
          int temp;
          scanf("%ld", &temp);
        }
        
        if (size == 1){
            printf("%ld\n", arr[0]);
        }
        else{

        }
    }
}