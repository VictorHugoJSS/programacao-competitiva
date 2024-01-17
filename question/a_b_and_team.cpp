// CodeForces
// Question: 519C - A and B and Team Training
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int xp, nb, teams = 0;

    cin >> xp >> nb;

    while(nb && xp){
      if (nb == 1 && xp == 1) { break; }
      if (nb >= xp){
        nb -= 2;
        xp -= 1;
      }
      else{
        xp -= 2;
        nb -= 1;
      }
      teams++;
    }

    cout << teams << "\n";
    return 0;
}
