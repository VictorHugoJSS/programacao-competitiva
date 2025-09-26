#include <bits/stdc++.h>
#define MAX 100000

using namespace std;
typedef long long ll;

ll ways[MAX];
int types[] = {1, 5, 10, 25, 50};

void coinChange(){
    ways[0] = 1;

    for(auto c : types){
        for (ll i = c; i <= MAX; i++)
            ways[i] += ways[i-c];
    }
}


int main(){
    coinChange();

    long n;

    while(scanf("%ld", &n) != EOF){
        if (ways[n] == 1){
            printf("There is only %lld way to produce %ld cents change.\n", ways[n], n);
        }
        else{
            printf("There are %lld ways to produce %ld cents change.\n", ways[n], n);
        }
    }

    return 0;
}
