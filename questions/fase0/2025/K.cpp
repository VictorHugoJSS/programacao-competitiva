#include <bits/stdc++.h>

using namespace std;

vector<int> elements;

void dp(vector<int> arr){
    
}
int main(){
    int n, k;

    scanf("%d %d", &n, &k);

    vector<int> arr(n), arr2(n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }

    vector<pair<int,int>> perm;

    for (int i = 0; i < n; i++){
        perm.push_back({arr[i], arr2[i]});
    }


    return 0;
}
