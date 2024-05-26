#include <bits/stdc++.h>

using namespace std;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   string t;

   getline(cin, t);

   if (t[0] == 'O'){
      cout << "?\n";
   }
   else if ((t[0] == 'X' && t[1] == 'X') || (t[1] == 'X' && t[2] == 'X')){
      cout << "Alice\n";
   }
   else if ((t[0] == 'O' && t[1] == 'O') || (t[1] == 'O' && t[2] == 'O')){
      cout << "Bob\n";
   }
   else{
      printf("*\n");
   }

   return 0;
}
