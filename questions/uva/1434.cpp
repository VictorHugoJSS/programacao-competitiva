#include <bits/stdc++.h>

using namespace std;

long long int value[1000001];
long long int value_fat [1000001];


long long int factorial(long int n){
    if (value_fat[n-1] != 1){
        value_fat[n] = value_fat[n-1] * n;
        return value_fat[n] ;
    }

    for (long long int i = 2; i <= n; i++){
        value_fat[i] = value_fat[i-1] * i;
    }

    return value_fat[n];
}

long long int yaptcha (long long int n){
    if (value[n] != 0 || n == 1){
        return value[n];
    }

    long long int f1, f2, div;

    if (value[n-1] != 0){
        f1 = factorial(3*n+6) + 1;
        f2 = factorial(3*n+6);
        div = 3 * n + 7;
        return value[n] = value[n-1] + (f1/div - f2/div);
    }
    
    for (long long int i = 2; i < n; i++){
        f1 = factorial(3*i+6) + 1;
        f2 = factorial(3*i+6);
        div = 3 * i + 7;
        value[i] = value[i-1] + (f1/div - f2/div);
    }
    value[n] = value[n-1] + (f1/div - f2/div);

    return value[n];
}
int main(){
    memset(value, -1, sizeof(value));
    memset(value_fat, 1, sizeof(value_fat));
    long int tc;
    scanf("%ld", &tc);

    while (tc--){
        long int n;
        scanf("%ld", &n);
        printf("%lld\n", yaptcha(n));
    }

    return 0;
}
