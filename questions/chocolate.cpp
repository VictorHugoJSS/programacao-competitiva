// Sphere Online Judge - Spoj
// Question: CHOCPJ09 - Competição de chocolate
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main(){
    ui quant, choc_p_round;

    cin >> quant >> choc_p_round;

    if (quant % (choc_p_round+1) == 0){
        cout << "Carlos\n";
    }
    else{
        cout << "Paula\n";
    }
    return 0;
}
