// Sphere Online Judge - Spoj
// Question: CHOCPJ09 - Competição de chocolate
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main(){
    ui quant, choc_p_round;

    cin >> quant >> choc_p_round;

    if (quant % choc_p_round != 0){
        cout << "Paula\n";
    }
    else{
        cout << "Carlos\n";
    }
    return 0;
}