#include <bits/stdc++.h>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n, l, d;

   cin >> n >> l >> d;
   double l_student = (double) (n * d);
   double total = l_student / (l*1000);
   int min = ceil(total) * l;
   cout << min << "\n";
   return 0;

}
