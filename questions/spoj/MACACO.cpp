#include <bits/stdc++.h>

using namespace std;
typedef struct rectangle rect;

struct rectangle{
    int x, y, u, v;
};


int main(){
    int n, i = 0;

    while (scanf("%d", &n) != EOF){
        vector<rect> arr(n);

        for (int i = 0; i < n; i++){
            scanf("%d %d %d %d", &arr[i].x, &arr[i].y, &arr[i].u, &arr[i].v);
        }

        sort(arr.begin(), arr.end(), [&](rect n1, rect n2){
            return n1.y * n1.u > n2.y * n2.u;
        });
        
        
        
        if (i != 0){
            printf("\n");
        }
        printf("Teste %d\n", ++i);
    }
}