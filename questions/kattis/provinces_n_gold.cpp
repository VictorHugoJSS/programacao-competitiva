#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int gold, silver, copper;
    cin >> gold >> silver >> copper;
    int buyingPower = gold * 3 + silver * 2 + copper;

    if (buyingPower == 1){
        cout << "Copper\n";
    }
    else if (buyingPower == 2){
        cout << "Estate or Copper";
    }
    else if (buyingPower == 3 || buyingPower == 4){
        cout << "Silver\n";
    }
    else if (buyingPower == 5){
        cout << "Dunchy or Silver\n";
    }
    else if (buyingPower == 6 || buyingPower == 7){
        cout << "Dunchy or Gold\n";
    }
    else{
        cout << "Province or Gold";
    }
    return 0;
}