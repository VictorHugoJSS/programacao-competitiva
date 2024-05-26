// BEECROWD
// Question: Event time
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
  int Day1, H1, M1, S1;
  int Day2, H2, M2, S2;
  int deltaDay, deltaH, deltaM, deltaS;

  scanf("Dia %d", &Day1);
  scanf("%d : %d : %d", &H1, &M1, &S1); getchar();
  scanf("Dia %d", &Day2);
  scanf("%d : %d : %d", &H2, &M2, &S2); getchar();

  deltaS = S2-S1;
  deltaM = M2-M1;
  deltaH = H2-H1;
  deltaDay = Day2-Day1;

  if (deltaS < 0){
    deltaS += 60;
    deltaM--;
  }
  if (deltaM < 0){
    deltaM += 60;
    deltaH--;
  }
  if (deltaH < 0){
    deltaH += 24;
    deltaDay--;
  }
  printf("%d dia(s)\n", deltaDay);
  printf("%d hora(s)\n", deltaH);
  printf("%d minuto(s)\n", deltaM);
  printf("%d segundo(s)\n", deltaS);
  return 0;
}
