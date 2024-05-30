#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double x, y;
    cin >> x >> y;
    y--;
    if (y < 0.5){
        if (x == 0){
            printf("ALL GOOD\n");
        }
        else{
            printf("IMPOSSIBLE\n");
        }
    }
    else{
        printf("%.9lf\n", -(x/y));
    }
    return 0;
}
