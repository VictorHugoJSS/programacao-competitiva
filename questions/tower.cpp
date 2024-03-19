// NEPS Academy
// Question: Tower
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int size, sum = 0, best = 0;
  cin >> size;

  vector <vector<int>> vii(size, vector<int> (size));

  for (int i = 0; i < size; i++){
    for (int j = 0; j < size+1; j++){
      cin >> vii[i][j];
    }
  }

  for (int i = 0; i < size; i++){
    sum = 0;
    for (int j = 0; j < size; j++){
      
    }
    best = max(sum, best);
  }
  cout << best << "\n";
  return 0;
}
