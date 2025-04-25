#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k;

  scanf("%d %d", &n, &k);

  vector<int> arr(n);

  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  
  sort(arr.begin(), arr.end());

  int a = 0, b = arr.size()-1, books = 0, time = 0;

  while (a <= b){

    if (arr[a] + time < k){
      a = a + 1;
      books++;
      time += arr[a];
    }
    else if (arr[b] + time < k){
      b = b - 1;
      time += arr[b];
      books++;
    }
    else{
      break;
    }
  }
  
  printf("%d\n", books);

  return 0;
}
