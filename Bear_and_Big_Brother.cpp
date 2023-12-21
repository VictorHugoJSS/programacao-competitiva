// CodeForces
// Question: 791A - Bear and Big Brother
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    int years, limak, bob;

    cin >> limak >> bob;

    for (years = 0; limak <= bob; years++){
        limak *= 3;
        bob *= 2;
    }

    cout << years << '\n';
    return 0;
}