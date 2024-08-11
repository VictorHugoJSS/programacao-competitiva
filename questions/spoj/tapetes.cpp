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
  sum += quant-1;
  lu rest = comp - sum;
  sum += rest * rest;

  printf("%ld\n", sum);
  return 0;
}
