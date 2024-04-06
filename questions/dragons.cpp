// CodeForces
// Question: 230A - Dragons
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;
vector <pair<int, int>> vii;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int s, enemies, confirm;
  int monster, xp;

  cin >> s >> enemies;

  for (int i = 0; i < enemies; i++){
    cin >> monster >> xp;
    vii.push_back({monster, xp});
  }
  sort(vii.begin(), vii.end());

  for (int i = 0; i < enemies; i++){
    if (s > vii[i].first){
      s += vii[i].second;
      confirm = 1;
    }
    else{
      confirm = 0;
      break;
    }
  }
  
  if (confirm){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }

  return 0;
}
