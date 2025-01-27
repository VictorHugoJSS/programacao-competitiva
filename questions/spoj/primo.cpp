#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n){
    
    if (n == 1 || n == 0){
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    long long n;
    
    scanf("%lld", &n);
    
    if (is_prime(n)){
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }
    
    return 0;
}
