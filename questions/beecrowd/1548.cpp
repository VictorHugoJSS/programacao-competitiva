#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int size, noSwap = 0;

        scanf("%d", &size);

        vector<int> atual(size), depois(size);

        for (int i = 0; i < size; i++){
            scanf("%d", &atual[i]);

            depois[i] = atual[i];
        }

        sort(depois.begin(), depois.end(), cmp);

        for (int i = 0; i < size; i++){
            if (atual[i] == depois[i]){
                noSwap++;
            }
        }
        printf("%d\n", noSwap);
    }

    return 0;
}