// Sphere Online Judge
// Question: PARPROX - Pontos
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int TC;
  long subX = 0, subY = 0;
  double total;

  cin >> TC;

  while (TC--){
    int x, y;
    cin >> x >> y;
    subX = x - subX;
    subY = y - subY
  

  total = hypot(subX, subY);
  printf("%.3lf\n", total);
  return 0;
}
