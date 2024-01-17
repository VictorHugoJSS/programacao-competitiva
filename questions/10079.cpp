#include <iostream>
using namespace std;

long long int cut (long long int n) {
    long long int pieces = 1;
    for (int i = 0; i < n; i++) {
        pieces += i+1;
    }

    return pieces;
}

int main() {
    long long int n;

    while (cin >> n) {
        if (n < 0){
            break;
        }
        cout << cut(n) << endl;
    }

    return 0;
}