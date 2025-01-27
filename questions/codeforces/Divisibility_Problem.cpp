#include <bits/stdc++.h>
#define MAX 1000000000

using namespace std;

int memo[MAX];

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        long long moves = 0;
        long long a, b;

        scanf("%lld %lld", &a, &b);

        while ((a+moves)%b != 0){
            moves++;
        }

        printf("%lld\n", moves);
    }   
}