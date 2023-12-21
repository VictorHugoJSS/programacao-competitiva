// CodeForces
// Question 624A - Save Luke
// Student: Victor Hugo

#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;
    int velocidade = v1+v2;
    double time = (double) (L-d)/velocidade;

    cout << fixed << setprecision(20);
    cout << time << "\n";
    return 0;
}