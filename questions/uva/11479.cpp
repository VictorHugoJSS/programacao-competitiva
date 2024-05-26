#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc, i = 1;
    long long int l1, l2, l3;
    
    cin >> tc;

    while (tc--){
        cin >> l1 >> l2 >> l3;
        
        if (l1 + l2 <= l3 || l1 + l3 <= l2 || l2 + l3 <= l1){
            printf("Case %d: Invalid\n", i++);
        }
        else if (l1 == l2 && l2 == l3 && l1 == l3){
            printf("Case %d: Equilateral\n", i++);
        }
        else if (l1 == l2 || l2 == l3 || l1 == l3){
            printf("Case %d: Isosceles\n", i++);
        }
        else{
            printf("Case %d: Scalene\n", i++);
        }
    }

    return 0;
}