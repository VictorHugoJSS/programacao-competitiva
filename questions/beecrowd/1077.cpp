#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    string inf;

    scanf("%d", &tc);

    while (tc--){
        cin >> inf;
        string res = "";
        stack <char> s;

        for (int i = 0; i < inf.size(); i++){
            if (inf[i] == '+' || inf[i] == '*' || inf[i] == '-' || inf[i] == '/' || inf[i] == '^'){
                s.push(inf[i]);
            }
            else{
                res += inf[i];
            }
        }
        
        cout << res << "\n";
    }

    return 0;
}