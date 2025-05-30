#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int y, k, x = 1;

    cin >> y >> k;

    for (long long int i = 0; i < k; i++){

        if(x == 1 || y == 1){
            x++;
        }
        else{
            x += gcd(x,y);
        }
    }

    cout << x << endl;
}