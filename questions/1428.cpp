#include <bits/stdc++.h>

using namespace std;

vector <int> arr;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int TC;
  cin >> TC;

  while(TC--){
    int quant, players;
    scanf("%d", quant);

    while (quant--){
      scanf("%d", players);
      arr.push_back(players);
    }
  }
}
