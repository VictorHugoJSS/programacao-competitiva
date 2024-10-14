#include <bits/stdc++.h>

using namespace std;

int bs(int k, int n, int a, int b){
    int j = 0;
    for (int i = 0; i < n; i++){
        if ((k <= a && k <= b) || k == 0){
            return -1;
        }

        if (k > a){
            k -= a;
        }
        else if (k > b){
            k -= b;
        }
        j++;
    }

    return j;
}

int main(){
    int tc;

    while (tc--){
        int k, n, a, b;

        scanf("%d %d %d %d", &k, &n, &a, &b);

        printf("%d\n", bs(k, n, a, b));
    }
}