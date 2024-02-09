// Sphere Online Judge
// Question: MAXSUMSU - Maximum Subset Sum
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>
#include <algorithm>

int subset_sum(int size, int * arr){
  int best = 0, sum = 0;
  for (int i = 0; i < size; i++){
    sum = arr[i] < sum+arr[i] ? sum+arr[i]:arr[i];
    best = best < sum ? sum:best;
  }
  
  return best;
}
int main(){
  int TC;
  scanf("%d", &TC);

  while (TC--){
    int quant;
    scanf("%d", &quant);
    int arr[quant];

    for (int i = 0; i < quant; i++){
      scanf("%d", &arr[i]);
    }

    printf("%d\n",subset_sum(quant, arr));
  }
  return 0;
}
