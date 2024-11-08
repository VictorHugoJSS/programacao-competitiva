#include <bits/stdc++.h>

using namespace std;
typedef long long lld;

int memo[10000001] = {1};

int dp(int n){
    if (n == 1 || n == 0){
        return memo[0];
    }

    return memo[n];
}

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int n;
        scanf("%d", &n);
        printf("%d", dp(n) % 1000000007);
    }
}