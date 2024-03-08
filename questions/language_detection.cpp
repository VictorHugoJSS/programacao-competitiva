#include <bits/stdc++.h>

using namespace std;

int main(){
  string t;
  int i = 1;

  getline(cin, t);

  while (t.compare("#") != 0){
    if (t.compare("HELLO") == 0){
      printf("Case %d: ENGLISH\n", i++);
    }
    else if (t.compare("HOLA") == 0){
      printf("Case %d: SPANISH\n", i++);
    }
    else if (t.compare("HALLO") == 0){
      printf("Case %d: GERMAN\n", i++);
    }
    else if (t.compare("BONJOUR") == 0){
      printf("Case %d: FRENCH\n", i++);
    }
    else if (t.compare("CIAO") == 0){
      printf("Case %d: ITALIAN\n", i++);
    }
    else if (t.compare("ZDRAVSTVUJTE") == 0){
      printf("Case %d: RUSSIAN\n", i++);
    }
    else{
      printf("Case %d: UNKNOWN\n", i++);
    }
    getline(cin, t);
  }
  return 0;
}
