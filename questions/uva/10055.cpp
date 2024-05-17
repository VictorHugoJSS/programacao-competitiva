#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a, b;
    long long int diff;

    while (cin >> a >> b){
        diff = abs(a-b);
        cout << diff << "\n";
    }

    return 0;
}