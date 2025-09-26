#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, total = 0;

    scanf("%d %d", &n, &k);

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int value = v[0];

    for (int i = 1; i <= k; i++){

        for (int j = 1; j < v.size(); j++){
            if (v[0] < v[j]){
                swap(v[0], v[j]);
                break;
            }
        }
        
        value = v[0];
        
        if (i == k){
            while (value % 10 != 0 && value != 0){
                total += value % 10;
                value /= 10;
            }
            break;
        }
        else{
            while (value % 10 != 0 && value != 0){
                v[0] -= value % 10;
                value /= 10;
            }
        }
    }

    printf("%d\n", total);

    return 0;
}
