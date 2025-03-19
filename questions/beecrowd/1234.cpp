#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;

    while(getline(cin, t)){

        for (int i = 0; i < t.size(); i++){
            if (t[i] == ' '){
                continue;
            }

            if (!(t[i+1]>40 && t[i+1] <= 90)){
                t[i]-=32;
            }
            else{
                t[i]+= 32;
            }
        }

        cout << t << endl;
    }

    return 0;
}