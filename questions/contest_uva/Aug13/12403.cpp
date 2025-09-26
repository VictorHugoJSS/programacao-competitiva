#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    long report = 0, value;

    cin >> tc;

    while(tc--){
        string action;

        cin >> action;

        if (action == "donate"){
            cin >> value;
            report += value;
        }
        else{
            printf("%ld\n", report);
        }
    }

    return 0;
}