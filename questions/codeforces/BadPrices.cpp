#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int size, temp;

        scanf("%d", &size);
        
        if (size == 1){
            printf("0\n");
            continue;
        }

        vector<int> low, high, arr(size);
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        sort(arr.rbegin(), arr.rend());

        int i = 0;
        while (i < arr.size()){

            if (high.empty()){
                high.push_back(arr[i]);
            }
            else if (arr[i] > high[high.size()-1]){
                low.push_back(high[high.size()-1]);
                high.pop_back();
                high.push_back(arr[i]);
            }
            else if (!low.empty() && arr[i] < low[low.size()-1]){
                high.push_back(low[low.size()-1]);
                low.pop_back();
                low.push_back(arr[i]);
            }
            else{
                low.push_back(arr[i]);
            }
            i++;
        }
        printf("%d\n", high.size());
    }
}