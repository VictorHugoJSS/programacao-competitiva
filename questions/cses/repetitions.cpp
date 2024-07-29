#include <bits/stdc++.h>
using namespace std;

int main(){
    map <char, long int> characters;
    string t;
    long int mx = INT_MIN;

    cin >> t;

    for (size_t i = 0; i < t.size(); i++){
        characters[t[i]]++;
    }

    for (auto i : characters){
        mx = max(mx, i.second);
    }

    printf("%ld\n", mx);
    return 0;
}
