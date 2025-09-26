#include <bits/stdc++.h>

using namespace std;

int64_t memo[1000000001];

int64_t fat(int n){
    if (memo[n] != -1){
        return memo[n];
    }
    if (n <= 1){
        return memo[n] = 1;
    }

    memo[n] = n * fat(n-1);

    return memo[n];
}

int main(){
    memset(memo, -1, sizeof(memo));
    int n, k;
    
    scanf("%lld %lld", &n, &k);

    while(n || k){
        int64_t ways = fat(n)/(fat(k) * fat(n-k));

        printf("%" PRId64 "\n", ways);
        scanf("%d %d", &n, &k);
    }

    return 0;
}
