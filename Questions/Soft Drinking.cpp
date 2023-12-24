#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    int minorAB, minorABC;
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toast_per_milli = (k * l) / n;
    int toast_per_lime = c * d;
    int toast_salt = p / np;

    minorAB = ((toast_per_milli+toast_per_lime) - abs(toast_per_milli-toast_per_lime))/2;
    minorABC = ((minorAB+toast_salt) - abs(minorAB-toast_salt))/2;

    cout << minorABC/n << "\n";
    return 0;
}