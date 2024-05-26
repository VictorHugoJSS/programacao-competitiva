// Sphere Online Judge
// Question: FREQUE12 - Frequencia na Aula
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;


int main(){
  set <int> s;
  int TC, total = 0;
  scanf("%d", &TC);

  for (int i = 0; i < TC; i++){
    int a;
    cin >> a;
    s.insert(a);
  }

  cout << s.size() << "\n";
  return 0;
}
