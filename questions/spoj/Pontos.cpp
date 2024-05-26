// Sphere Online Judge
// Question: PARPROX - Pontos
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;
vector <double> x;
vector <double> y;

double distance (double x1, double y1, double x2, double y2){
  double diffX, diffY, dist;

  diffX = pow(x2-x1,2);
  diffY = pow(y2-y1,2);
  dist = sqrt(diffX+diffY);

  return dist;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int TC;
  double dist,minor = 2000000;

  cin >> TC;

  for (int i = 0; i < TC; i++){
    double distX,distY;

    cin >> distX >> distY;
    x.push_back(distX);
    y.push_back(distY);
    
  }

  for (int i = 0; i < TC; i++){
    for (int j = i+1; j < TC; j++){
      dist = distance(x[i],y[i],x[j],y[j]);
      minor = dist < minor ? dist:minor;
    }
  }
  printf("%.3lf\n", minor);
  return 0;
}
