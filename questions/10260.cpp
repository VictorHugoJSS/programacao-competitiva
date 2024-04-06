#include <bits/stdc++.h>

using namespace std;

char digit(char c){

    if (c == 'B' || c == 'F' || c == 'P' || c == 'V'){
        return '1';
    }
    else if (c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q' || c == 'S' || c == 'X' || c == 'Z'){
        return '2';
    }
    else if (c == 'D' || c == 'T'){
        return '3';
    }
    else if (c == 'L'){
        return '4';
    }
    else if (c == 'M' || c == 'N'){
        return '5';
    }
    else if (c == 'R'){
        return '6';
    }
    return '0';
}
string soundex(string t){
    string sc;
    for (int i = 0; i < t.size(); i++){
        if (digit(t[i]) != '0' && digit(t[i]) != digit(t[i-1])){
            sc.push_back(digit(t[i]));
        }
    }

    return sc;
}
int main(){
    string t;

    while (getline(cin, t)){
        
        cout << soundex(t) <<"\n";
    }

    return 0;
}