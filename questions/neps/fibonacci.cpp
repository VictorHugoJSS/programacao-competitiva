// NEPS Academy
// Question: Fibonnaci
// Student: Victor Hugo

#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 40;
int N, numbers[MAX_N];
int memo[MAX_N] = {0};

int fib(int n){
    if (memo[n] != 0){
    	return memo[n];
    }
    if (n <= 1){
    	return memo[n] = 1;
    }

    memo[n] = fib(n-1) + fib(n-2);  
    return memo[n];
}

int main(){
    int n;

    scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}
