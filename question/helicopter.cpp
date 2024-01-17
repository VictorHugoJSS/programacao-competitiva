// NEPS Academy
// Question: Helicopter Escape
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

char fuga(int H, int P, int F, int D){
  int p, h;

  p = (P - F) / D;
  h = (H - F) / D;
  
  if (h < 0) {
    h += 16;
  }
  if (p < 0) {
    p += 16;
  }

  if (h < p) {
    return 'S';
  }
  return 'N';
}

int main(){
    int H, P, F, D;
    char r;
    cin >> H >> P >> F >> D;

    r = fuga(H, P, F, D);

    cout << r;
    return 0;
}
