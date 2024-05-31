#include <bits/stdc++.h>

using namespace std;

int main(){
    int sweet, sour;
    cin >> sweet >> sour;

    while (sweet != 0 && sour != 0){

        if (sour + sweet == 13){
            printf("Never speak again.\n");
        }
        else if (sweet > sour){
            printf("To the convention.\n");
        }
        else if (sweet < sour){
            printf("Left beehind.\n");
        }
        else{
            printf("Undecided.\n");
        }

        cin >> sweet >> sour;
    }
}