// Sphere Online Judge
// Question: Encontre o telefone
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>
 
using namespace std;
 
char digit(char a){
    switch(a){
        case 'A':
        case 'B':
        case 'C': return '2';
        case 'D':
        case 'E':
        case 'F': return '3';
        case 'G':
        case 'H':
        case 'I': return '4';
        case 'J':
        case 'K':
        case 'L': return '5';
        case 'M':
        case 'N':
        case 'O': return '6';
        case 'P':
        case 'Q':
        case 'R':
        case 'S': return '7';
        case 'T':
        case 'U':
        case 'V': return '8';
        default: return '9';
    }
    return ' ';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string t, n;
    
    while (getline(cin, t)){
        for (int i = 0; i < t.size(); i++){
            if (isalpha(t[i])){
                n.push_back(digit(t[i]));
            }
            else{
                n.push_back(t[i]);
            }
        }
        cout << n << "\n";
        n.clear();
    }
    return 0;
}
