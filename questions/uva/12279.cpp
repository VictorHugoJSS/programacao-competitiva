#include <bits/stdc++.h>

using namespace std;

int main(){
   int tc, temp, i = 1;

   scanf("%d", &tc);

   while (tc != 0){
      int diff, given = 0, not_given = 0;

      while (tc--){
         cin >> temp;
         if (temp != 0){
            not_given++;
         }
         else{
            given++;
         }
      }

      diff = not_given - given;
      printf("Case %d: %d\n", i++, diff);
      scanf("%d", &tc);
   }

   return 0;
}
