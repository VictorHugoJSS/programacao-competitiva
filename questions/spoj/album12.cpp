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

  if (l1 + l2 <= x && max(h1, h2) <= y){
    printf("S\n");
  }
  else if (){
    
  }

  return 0;
}
