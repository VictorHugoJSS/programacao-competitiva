#include <bits/stdc++.h>
#define MAX 100000

using namespace std;
long long d;
long long memo[MAX] = {0};

vector<int> arr;

long long fat(long long n){
    if (memo[n] != 0){
        return memo[n];
    }
    if (n <= 1){
        return 1;
    }

    if (n % d == 0){
        arr.push_back(n);
    }

    memo[n] = n * fat(n-1);

    return memo[n];
}

long long total_of_divisibility(long long n, long long d){
    int total = 0;
    int size = arr.size();

    for (long long i = n; i >= 0; i--){
        total += fat(size);
        if (fat(i) % d == 0){
            total++;
        }
        if (i % d == 0){
            size--;
        }
    }

    return total;
}

int main(){
    long long int n;

    scanf("%lld %lld", &n, &d);

    while (n || d){
        fat(n);
        printf("%lld\n", total_of_divisibility(n, d));
        arr.clear();
        scanf("%lld %lld", &n, &d);
    }

    return 0;
}