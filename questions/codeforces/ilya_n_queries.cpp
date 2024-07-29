#include <bits/stdc++.h>

using namespace std;
int same[100001] = {0};

void iguality (string v){
  for (int i = 1; i < v.size(); i++){
    if (v[i] == v[i-1]){
      same[i] = same[i-1]+1;
    }
    else{
      same[i] = same[i-1];
    }
  }
}

int main(){
  int tc;
  int x, y;
  string v;

  getline(cin, v);
  iguality(v);
  scanf("%d", &tc);

  while (tc--){
    scanf("%d %d", &x, &y);
    printf("%d\n", same[y-1]-same[x-1]);
  }

  return 0;
}