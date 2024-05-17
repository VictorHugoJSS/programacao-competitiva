#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string t;
    int i = 0; 

    getline(cin, t);

    while (t[0] != '*'){
        if (t.compare("Hajj") == 0){
            cout << "Case " << ++i << ": "<<"Hajj-e-Akbar\n";
        }
        else{
            cout << "Case " << ++i << ": "<<"Hajj-e-Asghar\n";
        }

        getline(cin, t);
    }

    return 0;
}