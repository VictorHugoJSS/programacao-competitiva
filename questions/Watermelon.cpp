// CodeForces
// Question: 4A - Watermelon
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;

    cin >> x;

    if (x % 2 == 0 && x / 2 != 1){
            cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}