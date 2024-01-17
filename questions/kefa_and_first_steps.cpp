// CodeForces
// Question: 580A - Kefa and Fist Steps
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int non_decreasing_order(int * arr, int n){
  int ndo = 1,max = 0;

  for (int i = 0; i < n; i++){
    ndo = 1;
    for (int j = i+1; j < n; j++){
      
      if (arr[i] <= arr[j]){
        ndo += 1;
      }
      else{
        break;
      }

    }

    if (ndo > max){
      max = ndo;
    }
  }

  return max;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int * numbers = (int *) malloc(n * sizeof(int*));
  
  for (int i = 0; i < n; i++){
    cin >> *(numbers+i);
  }

  cout << non_decreasing_order(numbers, n) << "\n";
  return 0;
}
