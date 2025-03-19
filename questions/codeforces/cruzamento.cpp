#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;

    scanf("%d", &size);

    vector<int> arr(size);

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int best = 0;

    for (int i = 0; i < size/2; i++){
        best = max(best, (arr[i]+arr[size-1-i])/2);
    }

    printf("%d\n", best);
}