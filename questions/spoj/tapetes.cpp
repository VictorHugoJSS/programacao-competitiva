// Sphere Online Judge
// Question: TAPETE14 - Tapetes
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;
typedef unsigned long int lu;

int main(){

  lu comp, quant;

  scanf("%lu %lu", &comp, &quant);
  
  lu sum = 0;

  for (lu i = 1; i <= quant-1 ; i++){
    sum = max(sum+((i*i)), sum);
  }
  cout << sum << "\n";
  return 0;
}
