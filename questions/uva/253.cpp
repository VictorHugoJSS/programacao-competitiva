#include <bits/stdc++.h>

using namespace std;

int main(){
    string original, a, b;
    char op;
    bool confirm = true;
    
    while (getline(cin, original)){

        for (int i = 0; i < 6; i++){
            a += original[i];
            b += original[5-i];
        }

        for (int i = 0; i < 6; i++){
            if (a[i] != b[5-i]){
                confirm = false;
                break;
            }
        }

        if (confirm){
            printf("TRUE\n");
        }
        else{
            printf("FALSE");
        }
    }

    return 0;
}