#include <bits/stdc++.h>

using namespace std;

int is_pangram(map <char, int>& mp){
    for (auto& i : mp){
        if (i.second == 0 && i.first != '\0'){
            return 0;
        }
    }
    return 1;
}
void map_charge(map<char, int>& test){
    char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r', 's', 't','u', 'v', 'w', 'x', 'y', 'z'};
    
    for (int i = 0; i < 26; i++){
        test[alph[i]] = 0;
    }
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    map <char, int> test;
    int n;
    string t;
    
    cin >> n >> t;
    
    map_charge(test);
    
    for (int i = 0; i < n; i++){
        char temp = tolower(t[i]);
        test[temp]++;
    }
    
    if (is_pangram(test)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
