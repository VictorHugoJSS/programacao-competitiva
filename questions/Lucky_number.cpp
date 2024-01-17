// CodeForces
// Question: 110A - Nearly Lucky Number
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
  string number;
  int i = 0, lucky_number = 0;
  getline(cin, number);
  
  while (number[i] != '\n'){
    if (number[i] == '7' || number[i] == '4'){
      lucky_number += 1;
    }
    i++;
  }

  if (lucky_number == 4 || lucky_number == 7 || lucky_number == 47 || lucky_number == 744){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
  return 0;
}
