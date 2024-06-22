#include <bits/stdc++.h>

using namespace std;
typedef long long int llu;

llu mms(int n, int size){
    int sum = 0;
    for (int i = 1; n*i <= size; i++){
        sum += n*i;
    }

    return sum;
}
int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int t, pos;
        llu max = LONG_LONG_MIN;
        scanf("%d", &t);

        for (int i = 2; i <= t; i++){
            llu value = mms(i, t);
           if (value > max){
            max = value;
            pos = i;
           }
        }
        printf("%d\n", pos);
    }
}