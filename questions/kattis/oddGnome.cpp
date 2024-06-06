#include <bits/stdc++.h>

using namespace std;

int main(){
   int tc;

   cin >> tc;

   while (tc--){
      int n, temp, x, pos;
      cin >> n;

      for (int i = 1; i <= n; i++){
         cin >> temp;
         if (i == 1){x = temp;}
         else if (temp != x+1) { pos = i;}
         else{ x = temp; }
      }

      printf("%d\n", pos);
   }

   return 0;
}
