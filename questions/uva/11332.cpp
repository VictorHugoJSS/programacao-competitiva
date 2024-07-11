#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int llu;

string g(string x){
    if (x.size() == 1){
        return x;
    }

    llu sum = 0;
    char num;
    for (size_t i = 0; i < x.size(); i++){
        sum += x[i]-'0';
    }

    return g(to_string(sum));
}
int main(){
    string n;

    getline(cin, n);

    while (n.compare("0") != 0){

        cout << g(n) << "\n";
        getline(cin, n);
    }

    return 0;
}