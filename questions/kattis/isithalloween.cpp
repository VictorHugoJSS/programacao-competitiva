// Kattis
// Question: IsItHalloween.com
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int day;
  string month;

  cin >> month >> day;

  if ((month.compare("OCT") == 0 && day == 31) || (month.compare("DEC") == 0 && day == 25)){
    cout << "yup\n";
  }
  else{
    cout << "nope\n";
  }

  return 0;
}
