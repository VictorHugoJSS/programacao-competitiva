// Sphere Online Judge
// Question: JESCADA - Escada
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int people, time[100], seconds = 0;
  
  cin >> people;

  for (int i = 0; i < people; i++){
    cin >> *(time+i);
  }
  for (int i = 0; i < people; i++){
    if (time[i] == time[people-1]){
      seconds += 10;
    }
    else if (time[i+1] - time[i] == 10 || time[i+1] - time[i] > 10){
      seconds += 10;
    }
    else{
      seconds += time[i+1] - time[i];
    }
  }
  cout << seconds << "\n";
  return 0;
}
