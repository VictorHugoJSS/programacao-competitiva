#include <bits/stdc++.h>

using namespace std;

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

int bs(int * arr, int size, int time){
  int a = 0, b = size-1;
  int k, minutes = 0, books = 0;

  while ( a <= b ){
    k = (a+b) / 2;
    if ( arr[k] + minutes == time ){
      books++;
      break;
    }
    if (arr + minutes < time){
            
    }
  }
  return books;
}
int main(){
  int n, t;
  scanf("%d %d", &n, &t);
  int numbers[n];
  for (int i = 0; i < n; i++){
    scanf("%d", &numbers[i]);
  }
  quick_sort(numbers, 0, n-1);
  printf("%d\n", bs(numbers,n, t));  
}
