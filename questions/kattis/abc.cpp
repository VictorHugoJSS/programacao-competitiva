#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
  int t = *x;
  *x = *y;
  *y = t;
}

void bubble_sort(int *arr, int size){
  for (int i = 0; i < size-1; i++){
    for (int j = 0; j < size-i-1; j++){
      if (arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

int main(){
  int numbers[3];
  char *seq = (char *) malloc(3 * sizeof(char*));

  scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);
  scanf(" %s", seq);
  bubble_sort(numbers, 3);
  for (int i = 0; i < 3; i++){
    if (seq[i] == 'A'){
      printf("%d", numbers[0]);
    }
    else if (seq[i] == 'B'){
      printf("%d", numbers[1]);
    }
    else{
      printf("%d", numbers[2]);
    }

    if (i < 2){
      printf(" ");
    }
  }
  printf("\n");
  free(seq);
  return 0;
}
