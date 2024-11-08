#include <bits/stdc++.h>

using namespace std;

struct pocket{
    int type = -1;
    int quant = 0;
};

bool zero(vector<int> arr){
    for (int i : arr){
        if (i != 0){
            return false;
        }
    }

    return true;
}

int main(){
    pocket arr[2];
    int n, k;
    
    scanf("%d %d", &n, &k);
    vector <int> pebbles(n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &pebbles[i]);
    }
    
    int day = 0;

    while (!zero(pebbles)){
        for (int i = 0; i < pebbles.size(); i++){
            if (arr[0].quant < k && arr[0].type == -1){
                if (pebbles[i] >= k){
                    arr[0].quant += k;
                    arr[0].type = i;
                    pebbles[i] -= k;
                }
                else if (pebbles[i] > 0){
                    arr[0].quant += pebbles[i];
                    arr[0].type = i;
                    pebbles[i] = 0;
                }
            }
            else if (arr[1].quant < k && arr[1].type == -1){
                if (pebbles[i] >= k){
                    arr[1].quant += k;
                    arr[1].type = i;
                    pebbles[i] -= k;
                }
                else if (pebbles[i] > 0){
                    arr[1].quant += pebbles[i];
                    arr[1].type = i;
                    pebbles[i] = 0;
                }
            }
        }
        day++;
        arr[0].quant = 0;
        arr[0].type = -1;
        arr[1].quant = 0;
        arr[1].type = -1;
    }
    printf("%d\n", day);
    return 0;
}