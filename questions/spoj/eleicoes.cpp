#include <bits/stdc++.h>
using namespace std;
typedef long long int llu;

int winner(map<int,int> mp){
    int mx = 0;
    int pos;
    for (auto& i : mp){
        if (mx < i.second){
            mx = i.second;
            pos = i.first;
        }
    }
    
    return pos;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    map<int, int> mp;
    int n;
    llu t;
    
    cin >> n;
    
    while (n--){
        cin >> t;
        mp[t]++;
    }
    
    cout << winner(mp) << "\n" ;
    return 0;
}
