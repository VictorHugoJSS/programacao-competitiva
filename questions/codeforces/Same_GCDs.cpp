#include <bits/stdc++.h>

using namespace std;

long gcd(int a, int b){
    if (a == 0){
        return b;
    }

    if (b == 0){
        return a;
    }

    int k;

    for (k = 0; ((a | b) & 1) == 0; k++){
        a >>= 1;
        b >>= 1;
    }

    while ((a & 1) == 0){
        a >>= 1;
    }

    while (b != 0){

        while ((b & 1) == 0){
            b >>= 1;
        }

        if (a > b){
            swap(a,b);
        }

        b = (b - a);
    }

    return a << k;
}

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        long a, m, total = 0;

        scanf("%ld %ld", &a, &m);

        for (long i = 0; i < m; i++){
            if (gcd(a,m) == gcd(a+i, m)){
                total++;
            }
        }

        printf("%ld\n", total);
    }

    return 0;
}