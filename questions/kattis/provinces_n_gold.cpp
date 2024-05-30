#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int gold, silver, copper;
    cin >> gold >> silver >> copper;
    int buyingPower = gold * 3 + silver * 2 + copper;

    if (buyingPower <= 1){
        cout << "Copper\n";
    }
    else if (buyingPower == 2){
        cout << "Estate or Copper";
    }
    else if (buyingPower <= 4){
        cout << "Estate or Silver\n";
    }
    else if (buyingPower == 5){
        cout << "Duchy or Silver\n";
    }
    else if (buyingPower == 6 || buyingPower == 7){
        cout << "Duchy or Gold\n";
    }
    else{
        cout << "Province or Gold";
    }
    return 0;
}