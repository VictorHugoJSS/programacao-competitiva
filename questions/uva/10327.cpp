#include <bits/stdc++.h>

using namespace std;

void swap (int * x, int * y){
   int t = *x;
   *x = *y;
   *y = t;
}

int insertion_sort(int * arr, int size){
   int n = 0;
   for (int i = 1; i < size; i++){
      
      for (int j = i; j != 0; j--){
         if (arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            n++;
         }
      }
   }

   return n;
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;

   while (cin >> n){
      int arr[n];
      for (int i = 0; i < n; i++){
         cin >> arr[i];
      }
      int swaps = insertion_sort(arr, n);
      cout << "Minimum exchange operations : " << swaps << "\n";
   }
}
