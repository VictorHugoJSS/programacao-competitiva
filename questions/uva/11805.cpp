// UVA Online Judge
// Question: Bafana Bafana
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
    int TC, i = 1;
    scanf("%d", &TC);

    while(TC--){
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);

        while (p--){
            if (k == n){
                k = 1;
            }
            else {
                k++;
            }
        }
        printf("Case %d: %d\n", i++,k);
    }
    return 0;
}