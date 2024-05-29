// NEPS Academy
// Question: Tower
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int size, temp;
  int total, best = 0;
  cin >> size;
  int arr[size][size];
  vector <int> sumLinha (size);
  vector <int> sumCol (size);

  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      cin >> temp;
      arr[i][j] = temp;
      sumLinha[i] += temp;
      sumCol[j] += temp;
    }
  }

  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      total = sumLinha[i] + sumCol[j] - 2*arr[i][j];
      best = max(best, total);
    }
  }

  printf("%d\n", best);
  return 0;
}
