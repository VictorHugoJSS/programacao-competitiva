// NEPS Academy
// Question: Lâmpadas
// Students: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

void swap (int * a, int * b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int test, Lamp_A = 0, Lamp_b = 0;

    cin >> test;

    for (int i = 0; i < test; i++){
        int interrupt;

        cin >> interrupt;

        if (interrupt == 1 && Lamp_A == 0){
            Lamp_A = 1;
        }
        else if (interrupt == 1 && Lamp_A == 1){
            Lamp_A = 0;
        }
        else if (interrupt == 2 && Lamp_A == 0 && Lamp_b == 0){
            Lamp_A = 1; Lamp_b = 1;
        }
        else if (interrupt == 2 && Lamp_A == 1 && Lamp_b == 1){
            Lamp_A = 0; Lamp_b = 0;
        }
        else{
            swap(Lamp_A, Lamp_b);
        }
    }

    cout << Lamp_A << "\n" << Lamp_b << "\n";
    return 0;
}