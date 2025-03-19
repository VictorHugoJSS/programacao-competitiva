#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double G, m1, m2, x1, x2, f;
    
    cin >> m1 >> m2 >> x1 >> x2 >> f;
    
    double dist = x2-x1;
    
    G = (f * (dist * dist))/(m1*m2);
    
    cout << setprecision(10) << fixed << G << "\n";
}
