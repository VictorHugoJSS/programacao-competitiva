#include <bits/stdc++.h>
using namespace std;

int main(){
   int size, temp;
   scanf("%d", &size);
   vector <int> arr;

   for (int i = 0; i < size-1; i++){
      scanf("%d", &temp);
      arr.push_back(temp);
   }

   sort(arr.begin(), arr.end());
   int j = 1;

   for (size_t i = 0; i < arr.size(); i++){
      if (arr[i] != j){
         break;
      }
      j++;
   }

   printf("%d\n", j);
   return 0;
}
