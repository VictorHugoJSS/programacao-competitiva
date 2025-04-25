#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  int tc;

  scanf("%d", &tc);

  while(tc--){
    ll size, mn,mx = INT_MIN;

    scanf("%lld", &size);

    vector<ll> arr(size);

    for (int i = 0; i < size; i++){
        scanf("%lld", &arr[i]);
    }

    if (size == 1){
        printf("%ld\n", arr[0]);
        continue;
    }

    sort(arr.rbegin(), arr.rend());

    while (arr.size() > 1){
        mn = arr[arr.size()-1];

        for (int i = 0; i < arr.size()-1; i++){
            arr[i] -= mn;
        }
        arr.pop_back();
        mx = max(mx, mn);
    }

    mx = max(mx, arr[0]);
    printf("%lld\n", mx);
  }

  return 0;
}
