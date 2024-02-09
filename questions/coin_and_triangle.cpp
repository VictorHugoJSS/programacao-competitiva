// CodeChef
// Question: Coins and Triangle
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

int main(){
    int TC;
    scanf("%d", &TC);

    while (TC--){
        int coins, rows;
        scanf("%d", &coins);
        rows = (-1+sqrt(1+8*coins))/2;
        printf("%d\n", rows);
    }
    return 0;
}