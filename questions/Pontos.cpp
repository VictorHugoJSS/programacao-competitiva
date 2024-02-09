// Sphere Online Judge
// Question: PARPROX - Pontos
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

int main(){
  int TC;
  long somaX = 0, somaY = 0;
  double total;
  scanf("%d", &TC);
  while (TC--){
    int x, y;
    scanf("%d %d", &x, &y);
    somaX = x - somaX;
    somaY = y - somaY;
  }
  total = pow(somaX, 2) + pow(somaY, 2);
  printf("%.3lf\n", sqrt(total));
  return 0;
}
