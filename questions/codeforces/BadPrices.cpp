#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int size, badDays = 0;

        scanf("%d", &size);

        vector<int> arr(size);

        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        for (int i = 1; i < size; i++){
            if (arr[i] > arr[i-1] || arr[i-1] > arr[i]){
                badDays++;
            }
        }

        printf("%d\n", badDays);
    }
}