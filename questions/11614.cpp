// UVA Online Judge
// Question: 11614 - Etruscan Warriors Never Play Chess
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

typedef unsigned long long ull;

int main(){
  int TC;

  scanf("%d", &TC);

  while(TC--){
    ull warriors, teams;

    scanf("%llu", &warriors);
  
    teams = (-1 + sqrt(1+8*warriors)) / 2;

    printf("%llu\n", teams);
  }  
  return 0;
}
