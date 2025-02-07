#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        long long moves;
        long long a, b;

        scanf("%lld %lld", &a, &b);

        if (a%b == 0){
            printf("0\n");
            continue;
        }

        int div = a/b;
        moves = (div+1)*b;
        printf("%lld\n", moves-a);
    }   
}