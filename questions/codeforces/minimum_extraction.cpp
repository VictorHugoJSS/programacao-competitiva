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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, size, min;

    cin >> TC;

    for (int i = 0; i < TC*2; i++){
        cin >> size;
        int * arr = (int *) malloc(size* sizeof(int));
        for (int i = 0; i < size; i++){
            cin >> *(arr+1);
        }
        quick_sort(arr, 0,size-1);

        cout << min << "\n";
        free(arr);
    }
}