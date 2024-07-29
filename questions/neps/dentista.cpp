#include <bits/stdc++.h>

using namespace std;

bool secondValueSort(pair<int,int> a1, pair<int,int> a2){
    return a1.second < a2.second;
}
int main(){
    int tc;
    int start, end, total = 1;
    vector<pair<int,int>> arr;

    scanf("%d", &tc);

    while (tc--){
        scanf("%d %d", &start, &end);
        arr.push_back({start, end});
    }
    sort(arr.begin(), arr.end(), secondValueSort);

    int current = arr[0].second;

    for (int i = 1; i < arr.size(); i++){
        if (current <= arr[i].first){
            total++;
            current = arr[i].second;
        }
    }

    printf("%d\n", total);
    return 0;
}