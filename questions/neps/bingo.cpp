#include <bits/stdc++.h>

using namespace std;

vector <int> vi;

int main(){
    int n, b, temp;
    scanf("%d %d", &n, &b);

    while (n || b){
        vector<int> arr(b);
        set<int> nums;

        for (int i = 0; i < b; i++){
            scanf("%d", &arr[i]);
        }
        if (b == n+1){
            printf("Y\n");
        }
        else{
            for (int i = 0; i < arr.size()-1; i++){
                for (int j = 0; j < arr.size(); j++){
                    nums.insert(abs(arr[i]-arr[j]));
                }
            }

            if (nums.size() == n+1){
                printf("Y\n");
            }
            else{
                printf("N\n");
            }
        }

        scanf("%d %d", &n, &b);
    }
    return 0;
}
