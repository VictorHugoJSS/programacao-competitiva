#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x, y;
  int l1, h1;
  int l2, h2;

  cin >> x >> y;
  cin >> l1 >> h1;
  cin >> l2 >> h2;
  
  if ((x - l1) < 0 || (x - l1 - l2) < 0 || (y - h1) < 0 || (y - l1 - l2) < 0){
    cout << "N\n";
  }
  else{
    cout << "S\n";
  }

  return 0;
}
