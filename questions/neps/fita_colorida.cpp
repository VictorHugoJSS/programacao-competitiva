#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
   int color = 1;
   int size;

   scanf("%d", &size);
   int arr[size];

   for (int i = 0; i < size; i++){
      scanf("%d", &arr[i]);
   }

   for (int i = 0; i < size; i++){
      if (arr[i] == 0){
         for (int j = i+1; arr[j] != 0 && j < size; j++){
            if (color == 9){
               arr[j] = 9;
            }
            else{
               arr[j] = color;
               color++;
            }
         }
         color = 1;
      }
   }

   for (int i = size-1; i >= 0; i--){
      if (arr[i] == 0){
         for (int j = i-1; arr[j] != 0 && j >= 0; j--){
            if (arr[j] > color || arr[j] == -1){
               arr[j] = color;
               color++;
            }
            else{
               break;
            }
         }
         color = 1;
      }
   }

   for (int i = 0; i < size; i++){
      printf("%d", arr[i]);

      if (i < size-1){
         printf(" ");
      }
   }

   printf("\n");
   return 0;
}
