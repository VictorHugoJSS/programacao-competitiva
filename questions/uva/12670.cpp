#include <bits/stdc++.h>

using namespace std;
typedef long long int llu;

llu counting_one(llu num){
    llu total = 0;
    llu n = num;
    while (n != 1){
        if (n % 2 == 1){
            total++;
        }
        n /= 2;
    }

    return total;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    llu inicio, final, total;

    while (cin >> inicio >> final){
        total = 0;

        for (llu i = inicio; i <= final; i++){
            total += counting_one(i);
        }

        cout << total << "\n";
    }

    return 0;
}