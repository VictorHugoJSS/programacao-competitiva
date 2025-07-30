#include <bits/stdc++.h>

using namespace std;

long long memo[52];

long long fib(int n){
    if (memo[n] != -1){
        return memo[n];
    }
    if (n <= 1){
        return memo[n] = 1;
    }
    
    memo[n] = fib(n-1) + fib(n-2);
    
    return memo[n];
    
}

int main(){
    memset(memo, -1, sizeof(memo));
    int tc, i = 0;
    
    scanf("%d", &tc);
    
    while(tc--){
        int n;
        scanf("%d", &n);
        
        printf("Scenario #%d:\n%lld\n\n", ++i,fib(n+1));
    }
    
    return 0;
}
