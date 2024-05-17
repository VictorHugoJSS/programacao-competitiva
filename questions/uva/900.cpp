#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int lenght, quant;

  cin >> lenght;

  while (lenght != 0){
    quant = (-1 + sqrt(1+8*lenght))/2;
    cout << quant << "\n";
    cin >> lenght;
  }
  return 0;
}
