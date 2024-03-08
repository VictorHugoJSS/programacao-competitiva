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

  string v;
  int tc;

  getline(cin, v);
  cin >> tc;

  for (int i = 0; i < tc; i++){
    int x, y;
    cin >> x >> y;

    cout << iguality(v,x,y) << "\n";
  }

  return 0;
}
