#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int tc;
  cin >> tc;

  while (tc--){
    int x, y;

    cin >> x >> y;
    
    if (x > y){
      cout << ">\n";
    }
    else if (x < y){
      cout << "<\n";
    }
    else{
      cout << "=\n";
    }
  }
  return 0;
}
