// NEPS Academy
// Question: Lâmpadas
// Students: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

void swap (int * x, int * y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int test, Lamp_A = 0, Lamp_b = 0;

    cin >> test;

    for (int i = 0; i < test; i++){
        int interrupt;

        cin >> interrupt;

        if (interrupt == 1){
            Lamp_A = 1;
        }
        else{
            swap(Lamp_A, Lamp_b);
        }
    }

    cout << Lamp_A << "\n" << Lamp_b << "\n";
    return 0;
}