#include <bits/stdc++.h>

using namespace std;

int iguality (string v,int begin, int end){
  int quant = 0;
  for (int i = begin; i < end; i++){
    if (v[i] == v[i-1]){
      quant++;
    }
  }
  return quant;
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  int x, y;
  string v;

  getline(cin, v);
  cin >> tc;

  while (tc--){
    cin >> x >> y;
    printf("%d\n", iguality(v,x,y));
  }

  return 0;
}
