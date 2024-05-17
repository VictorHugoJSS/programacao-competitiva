// Uva Online Judge
// Question: Automatic Answer
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc, number;
  string tens;

  scanf("%d", &tc);

  while (tc--){
    int calc, size;
    scanf("%d", &number);
    calc = ((((((number*567) / 9) + 7492) * 235) / 47) - 498);(
    tens = to_string(calc));
    size = tens.length();
    printf("%c\n", tens[size-2]);
  }
  return 0;
}
