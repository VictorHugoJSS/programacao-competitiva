// NEPS Academy
// Question: Boots Swap
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int quant, pair = 0;

  cin >> quant;

  int * tam = (int *) malloc(quant * sizeof(int));
  char * dir = (char*) malloc(quant * sizeof(char));

  for (int i = 0; i < quant; i++){
    cin >> *(tam+i) >> *(dir+i);
  }

  for (int i = 0; i < quant; i++){
    for (int j = i+1; j < quant; j++){
      if (tam[i] == tam[j] && dir[i] != dir[j]){
        pair++;
      }
    }
  }

  cout << pair << "\n";
  free(tam);
  free(dir);
  return 0;
}
