#include <bits/stdc++.h>

using namespace std;

int minor(vector <int> &arr){
  int mn = INT_MAX, pos;

  for (pos = 0; pos < arr.size(); pos++){
    mn = min(arr[pos], mn);
  }

  arr.erase(arr.begin()+pos);
  return mn;
}

int main(){
  int tc;
  
  scanf("%d", &tc);

  while (tc--){
    int size;

    scanf("%d", &size);

    vector<int> arr(size);

    for (int i = 0; i < size; i++){
      scanf("%d", &arr[i]);
    }

    if (size == 1){
      printf("%d", arr[0]);
    }
    else{
      
    }
  }
}