#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int memo[MAX] = {0};

int fat(int n){
    if (memo[n] != 0){
        return memo[n];
    }
    
    if (n <= 1){
        return 1;
    }
    
    memo[n] = n * fat(n-1);
    
    return memo[n];
}

int main(){
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", fat(n));
    return 0;
}
