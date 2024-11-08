#include <bits/stdc++.h>

using namespace std;
vector<int> arr;

bool isSubsetSum(int sum){
    vector<bool> possible(sum+1, false);
    possible[0] = true;
    for (auto c : arr){
        for (int i = sum - c; i >= 0; i--){
            if (possible[i]){
                possible[i+c] = true;
            }
        }
    }
    return possible[sum];
}

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int size, sum;

        scanf("%d %d", &size, &sum);

        for (int i = 0; i < size; i++){
            int t;
            scanf("%d", &t);
            arr.push_back(t);
        }

        if (isSubsetSum(sum)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        arr.clear();
    }

    return 0;
}