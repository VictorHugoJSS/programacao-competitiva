#include <bits/stdc++.h>

using namespace std;
typedef long long int llu;

llu bin_to_dec (string s){
    int size = s.size()-1;
    llu number = 0;

    for (int i = 0; i < size; i++){
        if (s[i] == '1'){
            number += 1 * pow(2,i-1);
        }
    }

    return number;
}
int main(){
    string bin;
    llu number;

    ofstream file;
    file.open("input.txt");

    while (getline(cin,bin, '#') && bin.size() != 0){
        number = bin_to_dec(bin);
        if (number % 131071 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    file.close();
    return 0;
}