#include <bits/stdc++.h>

using namespace std;
int total = 0;

int main(){
   int size;
   int i = 1;
   scanf("%d", &size);

   while (size){
      int values[size];

      for (int i = 0; i < size; i++){
         scanf("%d", &values[i]); 
      }

      for (int i = 0; i < size-1; ++i){
         for (int j = 0; j < size-i-1; ++j){
            if (values[j] > values[j+1]){
               swap(values[j],values[j+1]);
               total++;
            }
         }
      }

      printf("There are %d swap maps for input data set %d\n", total, i++);
      total = 0;
      scanf("%d", &size);
   }
}
