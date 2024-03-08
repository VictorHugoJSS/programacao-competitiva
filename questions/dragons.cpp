// CodeForces
// Question: 230A - Dragons
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

void swap (int *x, int *y){
  int t = *x;
  *x = *y;
  *y = t;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int s, enemies, confirm;
  int monster, xp;

  cin >> s >> enemies;

  while (enemies--){
    cin >> monster >> xp;

    if (xp < monster){
      swap(&monster, &xp);
    }

    if (monster < s){
      s += xp;
      confirm = 1;
    }
    else{
      confirm = 0;
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
