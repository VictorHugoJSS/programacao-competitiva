#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;

  while (tc--){
    int n;
    cin >> n;

    if (n % 2 == 0){
      cout << n << " is even\n";
    }
    else{
      cout << n << " is odd\n";
    }
  }

  return 0;
}
