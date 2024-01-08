// Codeforces
// Question: 151A - Soft Drinking
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int minor(int a, int b, int c){
  int minorAB, minorABC;

  minorAB = ((a+b) - abs(a-b)) / 2;
  minorABC = ((minorAB+c) - abs(minorAB-c)) / 2;

  return minorABC;
}

int main(){
    int n, k, l, c, d, p, nl, np;
    int l_per_friends, limes, salts_per_friends;
    int min;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    l_per_friends = (k * l) / nl;
    limes = c * d;
    salts_per_friends = p / np;
    
    min = minor (l_per_friends, limes, salts_per_friends);

    cout << min/n << "\n";  
    return 0;
}
