#include <bits/stdc++.h>
#define MAX 100000

using namespace std;
typedef long long ll;

int dice[] = {1, 2, 3, 4, 5, 6};
ll ways[MAX];

void dp(){
    ways[0] = 1;
    for (auto c : dice){
        for (ll i = c; i <= MAX; i++){
            ways[i] += ways[i-c];
        }
    }
}

int main(){
    ll n;

    scanf("%lld", &n);
    dp();
    printf("%lld\n", ways[n]);
    return 0;
}