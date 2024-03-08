// Sphere Online Judge
// Question: f91
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int f91 (int n){
  if (n >= 101){
    return n-10;
  }

  return f91(f91(n+11));
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int number;
  
  cin >> number;

  while (number != 0){
    printf("f91(%d) = %d\n", number, f91(number));
    cin >> number;
  }
  return 0;
}
