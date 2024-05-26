// CodeForces
// Question: 1281A - Suffix Three
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TC;
    string t;

    cin >> TC;

    while (TC--){
        cin >> t;

        if (t[t.size()-1] == 'o'){
            printf("FILIPINO\n");
        }
        else if (t[t.size()-1] == 'u'){
            printf("JAPANESE\n");
        }
        else{
            printf("KOREAN\n");
        }
    }
    return 0;
}