#include <bits/stdc++.h>

using namespace std;

int string_sum(string t){
    string num1_string, num2_string;
    int a, b, plus_idx;
    for (long int i = 0; i < t.size(); i++){
        if (t[i] == '+'){ plus_idx = i;}
        num1_string += t[i];
    }
    for (long int i = (long int) plus_idx+1; i < t.size();i++){
        num2_string += t[i];
    }
    a = stoi(num1_string);
    b = stoi(num2_string);
    return (a+b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    getchar();
    while (tc--){
        string a;

        getline(cin, a);

        if (a.compare("P=NP") == 0){
           printf("skipped");
        }
        else{
            cout << string_sum(a) << "\n";
        }
    }

    return 0;
}