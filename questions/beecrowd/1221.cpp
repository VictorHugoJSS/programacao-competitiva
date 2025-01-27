#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n){
    if (n == 1){
        return true;
    }

    for (long long i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}
int main(){
    int tc;

    scanf("%d", &tc);

    while(tc--){
        long long n; 

        scanf("%lld", &n);

        if (is_prime(n)){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }

    return 0;
}