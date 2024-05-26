// CodeForces
// Question: 110A - Nearly Lucky Number
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
  string number, t;
  int i = 0, lucky_number = 0, total = 0;
  getline(cin, number);
  
  for (int i = 0; i < number.size(); i++){
    if (number[i] == '7' || number[i] == '4'){
      lucky_number += 1;
    }
  }
  t = to_string(lucky_number);

  if (t[0] == '4' || t[0] == '7'){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
  return 0;
}
