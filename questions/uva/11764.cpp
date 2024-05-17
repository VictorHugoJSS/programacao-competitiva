#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, i = 0;
    int high = 0, low = 0;
    int t;
    int x, y; 
    scanf("%d", &tc);

    while (tc--){
        scanf("%d", &t);

        while (t--){
            scanf("%d", &x);

            if (y != 0 && y < x){
                high++;
            }
            if (y != 0 && y > x){
                low++;
            }
            y = x;
        }
        printf("Case %d: %d %d\n", ++i, high, low);
        high = 0;
        low = 0;
        y = 0;
    }
    return 0;
}