// NEPS Academy
// Question: Fibonnaci
// Student: Victor Hugo

#include <bits/stdc++.h>

using namespace std;

int fibo (int n){
    if (n == 1 || n == 0){
        return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(){
    int number;

    cin >> number;

    cout << fibo(number) << "\n";
    return 0;
}