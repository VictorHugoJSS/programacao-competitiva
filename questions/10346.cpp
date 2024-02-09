#include <bits/stdc++.h>

using namespace std;

int cigarros (int cigarettes, int butts){
  int n = cigarettes, k = butts;

  for (int i = cigarettes; i >= butts; i -= butts){
    if (k == butts){
      n++;
      i++;
      k -= 3;
    }
    k += 3;
  }
  return n;
}

int main(){
  int cigarettes, butts;

  while (scanf("%d %d", &cigarettes, &butts) != EOF){
    int total = cigarros(cigarettes, butts);
    printf("%d\n", total);
  }
  return 0;
}
