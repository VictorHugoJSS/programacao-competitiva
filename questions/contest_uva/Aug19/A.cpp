#include <bits/stdc++.h>

using namespace std;

int main(){
    int  n, h, temp, total = 0;

    scanf("%d %d", &n, &h);

    while(n--){
        scanf("%d", &temp);

        if (temp <= h){
            total++;
        }
    }

    printf("%d\n", total);

    return 0;
}
