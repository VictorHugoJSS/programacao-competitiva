#include <bits/stdc++.h>

using namespace std;

int mult_17(string num, int size){
    int first = num[0]-'0';
    int last = num[size-1]-'0';
    int sub = first - 5*last;

    if (sub % 17 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string t;
    getline(cin, t);

    while (t[0] != '0'){
        int size = t.size();
        cout << mult_17(t,size) << "\n";
        getline(cin, t);
    }
    return 0;
}