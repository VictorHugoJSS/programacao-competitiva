#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int total;
    scanf("%d", &n);

    while (n){
        total = 0;
        for (int i = 1; i <= n; i++){
            total += i * i;
        }
        printf("%d\n", total);
        scanf("%d", &n);
    }

    return 0;
}