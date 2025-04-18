#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;

    scanf("%d", &k);

    vector<int> arr(k);
    vector<pair<int, int>> swaps;

    for (int i = 0; i < k; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k; i++){
        int min = arr[i];
        int pos = 0;
        
        for (int j = i+1; j < k; j++){
            if (min > arr[j]){
                min = arr[j];
                pos = j;
            }
        }
        if (min != arr[i]){
            swap(arr[i], arr[pos]);
            swaps.push_back(make_pair(i,pos));
        }
    }

    printf("%d\n", swaps.size());

    for (auto i : swaps){
        printf("%d %d\n", i.first, i.second);
    }

    return 0;
}
