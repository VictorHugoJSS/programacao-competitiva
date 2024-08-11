#include <bits/stdc++.h>
using namespace std;

int bubble_sort(int *arr, int size){
   int ans = 0;

   for (int i = 0; i < size-1; i++){
      for (int j = 0; j < size-1-i; j++){
         if (arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            ans++;
         }
      }
   }

   return ans;
}

int main(){
   int size;
   int i = 1;
   scanf("%d", &size);

   while (size){
      int values[size];

      for (int j = 0; j < size; j++){
         scanf("%d", &values[j]); 
      }

      printf("There are %d swap maps for input data set %d\n", bubble_sort(values, size),i++);
      scanf("%d", &size);
   }
}
