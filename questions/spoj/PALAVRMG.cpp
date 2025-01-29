#include <bits/stdc++.h>

using namespace std;

bool cmp (string t){
    for (int i = 0; i < t.size()-1; i++){
        if (tolower(t[i]) >= tolower(t[i+1])){
            return false;
        }
    }
    
    return true;
}
int main(){
    int tc;
    string t;
    
    scanf("%d", &tc);
    getchar();
    
    while (tc--){
        getline(cin, t);
        
        if (t.size() == 1){
            cout << t << ": O\n";
        }
        else if (cmp(t)){
            cout << t << ": O\n";
        }
        else{
            cout << t << ": N\n";
        }
    }
    
    return 0;
}
