// Neps Academy
// Question: Botas Trocadas / Switched Boots
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;
vector <pair<int, char>> vic;

int boots(int size){
  int pairs = 0;

  for (int i = 0; i < size; i++){
    for (int j = i+1; j < size; j++){
      if (vic[i].first == vic[j].first && vic[i].second != vic[j].second){
        pairs++;
      }
    }
  }

  return pairs;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc, total;
  scanf("%d", &tc);

  for (int i = 0; i < tc; i++){
    int tam;
    char l;
    cin >> tam >> l;
    vic.push_back({tam, l});
  }

  total = boots(tc);

  printf("%d\n", total);
  return 0;
}