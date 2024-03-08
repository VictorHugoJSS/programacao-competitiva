#include <bits/stdc++.h>

using namespace std;

int main(){
    int mb, tc;

    scanf("%d %d", &mb, &tc);

    int total = mb;

    while (tc--){
        int spend;
        scanf("%d", &spend);

        total += mb-spend;
    }

    printf("%d\n", total);
    return 0;
}