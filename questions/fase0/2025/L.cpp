#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;

    scanf("%lld", &n);

    long long int qb = ceil(log2(8 * 1000000 * n));

    printf("%lld\n", qb);

    return 0;
}