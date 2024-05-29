#include <bits/stdc++.h>

using namespace std;

int main(){
    double n;
    double aprox;
    cin >> n;

    while (n != 0){
        aprox = pow(n, 1/3);
        printf("%.4lf\n", aprox);
        cin >> n;
    }

    return 0;
}