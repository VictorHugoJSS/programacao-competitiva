// NEPS Academy
// Question: Tower
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int size, i = 0, j = 0, k = 0;
  cin >> size;
  int v[size][size], best = 0;

  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      cin >> v[i][j];
    }
  }

  while (i <= size-1){
    int sum = 0;
    for (j = 0; j < size; j++){
      if (j == k) {continue;}
      sum += v[k][j];
      sum += v[j][k];
    }
    best = sum > best ? sum:best;
    k = k < size ? k++ : 0;
    i = k == size-1 ? i:i++;
  }
  cout << best << "\n";
  return 0;
}
