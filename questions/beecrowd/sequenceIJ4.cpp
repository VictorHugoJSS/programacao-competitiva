#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  double j = 1;

  for (double i = 0; i <= 2; i+= 0.2){

    double n = j;

    while (n <= j+2){
     if (i == 0 || i == 1 || i >= 1.9){
      cout << fixed << setprecision(0) << "I=" << i << " J=" << n <<"\n";
     }
     else{
      cout << fixed << setprecision(1) << "I=" << i << " J=" << n <<"\n";
     }
     n++;
    }
    j += 0.2;

  }
  return 0;
}
