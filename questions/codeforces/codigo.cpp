#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    
    getline(cin, t);
    
    int total1 = 0;
    
    for (int i = 0; i < t.size()-1; i++){
        if (t[i] == '1'){
            total1++;
        }
    }
    
    if ((total1 % 2 == 0 && t[t.size()-1] == '0') || (total1 % 2 != 0 && t[t.size()-1] == '1')){
        printf("N?\n");
    }
    else{
        printf("S\n");
    }
}
