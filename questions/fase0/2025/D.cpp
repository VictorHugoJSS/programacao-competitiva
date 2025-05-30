#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string t1, t2;
    int n, super = 0, normal = 0;

    cin >> n;
    cin >> t1 >> t2;

    for (int i = 0; i < n; i++){
        if (t1[i] == '*'){
            super++;
        }
    }

    for (int i = 0; i < n; i++){
        if (t1[i] != t2[i]){
            normal++;
        }
    }

    double res = (double) normal/super;

    printf("%.2lf\n", res);
}