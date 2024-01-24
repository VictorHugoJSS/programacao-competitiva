// NEPS Academy
// Question: Tower
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int d, sum = 0, max = 0;
  cin >> d;
  int m[d][d];

  for (int i = 0; i < d; i++){
    for (int j = 0; j < d; j++){
      cin >> m[i][j];
    }
  }
  
  for (int i = 0; i < d; i++){
    
    for (int j = 0; j < d; j++){
      if (j == i){
        continue;
      }
      sum += m[j][i];
    }

    for (int j = 0; j < d; j++){
      if (j == i){
        continue;
      }

      sum += m[i][j];
    }

    if (sum > max){
      max = sum;
    }

    sum = 0;
  }
  cout << max  << "\n";
  return 0;
}
