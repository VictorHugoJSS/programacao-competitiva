#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, q;

    scanf("%d %d", &size, &q);

    vector<int>arr(size);

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    while (q--){
        int left, right, pos;

        scanf("%d %d %d", &left, &right, &pos);

        left--; right--; pos--;

        int count = 0;

        for (int i = left; i <= right; i++ ){
            if (arr[pos] > arr[i]){
                count++;
            }
        }

        if (count == pos - left){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}