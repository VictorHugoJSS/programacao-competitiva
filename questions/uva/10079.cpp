#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, total;

    cin >> n;
    while (n >= 0){

        total = 1 + n*(n+1)/2;
        cout << total << "\n";
        cin >> n;
    }

    return 0;
}