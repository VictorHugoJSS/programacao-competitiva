#include <bits/stdc++.h>

using namespace std;

int getMax(vector<int> &arr, int n){
  int mx = arr[0];
  for (int i = 1; i < n; i++){
    if (arr[i] > mx){
      mx = arr[i];
    }
  }

  return mx;
}

void countSort(vector<int> &arr, int n, int exp){
  int output[n];
  int i, count[10] = { 0 };

  for (i = 0; i < n; i++){
    count[(arr[i]/exp) % 10]++;
  }

  for (i = 1; i < 10; i++){
    count[i] += count[i-1];
  }

  for (i = n-1; i >= 0; i--){
    output[count[(arr[i]/exp) % 10] - 1] = arr[i];
    count[(arr[i]/exp) % 10]--;
  }

  for (i = 0; i < n; i++){
    arr[i] = output[i];
  }
}

void radixsort(vector<int> &arr, int n){
  int m = getMax(arr, n);

  for (int exp = 1; m / exp > 0; exp *= 10){
    countSort(arr, n, exp);
  }
}

int bs(vector<int> &arr, int size, int time){
  int minutes = 0;
  int count = 0;

  for (int i = 0; i < size/2; i++){
    if (arr[i] + minutes <= time){
      minutes += arr[i];
      count++;
    }

    if (arr[size-1-i] + minutes <= time){
      minutes += arr[size-1-i];
      count++;
    }
  }
  
  return count;
}

int main(){
  int n, k;

  scanf("%d %d", &n, &k);

  vector<int> arr(n);

  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  if (n == 1 && arr[0] <= k){
    printf("1\n");
    return 0;
  }
  radixsort(arr, n);

  printf("%d\n", bs(arr, n, k));
  
  return 0;
}
