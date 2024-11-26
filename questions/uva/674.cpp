#include <bits/stdc++.h>
#define MAX 100000

using namespace std;
typedef long long ll;

ll ways[MAX];
int type[] = {1, 5, 10, 25, 50};

void coinChange(){
    ways[0] = 1;
    for (auto c : type){
        for (ll i = c; i <= MAX; i++){
            ways[i] += ways[i-c];
        }
    }
}

int main(){
    int n;
    
    coinChange();
    while (cin >> n){
        printf("%lld\n", ways[n]);
    }
    
    return 0;
}
