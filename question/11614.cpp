// UVA ONLINE JUDGE
// Question: 11614

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll rows(ll n){
    ll q = n, row = 0, i = 1;

    while (q != 1){
        q /= i;
        row++;
        i++;
    }

    if (n > 9){
        return row+1;
    }

    return row;
}

int main(){
    int tests;

    cin >> tests;

    for (int i = 0; i < tests; i++){
        ll warriors;

        cin >> warriors;

        cout << rows(warriors) << "\n";
    }
    return 0;
}