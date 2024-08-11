#include <bits/stdc++.h>

using namespace std;

int values[1000000001] = {1};

int fat(int n){
    if (values[n-1] != 1){
        values[n] = values[n-1] * n;
        return values[n];
    }

    for (int i = 2; i <= n; i++){
        values[n] = values[n-1] * i;
    }

    return values[n];
}

int gcd(int a, int b){
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
            swap(a, b);
        }

        b = (b - a);
    }
    return a << k;
}
int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int fatA = fat(a);
    int fatB = fat(b);

    printf("%d\n", gcd(fatA, fatB));
}