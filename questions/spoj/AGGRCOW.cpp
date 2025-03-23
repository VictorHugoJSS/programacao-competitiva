#include <bits/stdc++.h>
using namespace std;

bool verif(vector<int> stab, int mid, int cow){
    int count = 1;
    int pos = stab[0];

    for (int i = 1; i < stab.size(); i++){
        if (stab[i] - pos >= mid){
            count++;
            pos = stab[i];
        }
    }

    if (count < cow){
        return false;
    }
    return true;
}

int main(){
    int tc, stab, cow;

    scanf("%d", &tc);

    while (tc--){
    	vector<int> arr;
        cin >> stab >> cow;
        
        for (int j = 0; j < stab; j++){
            int temp;
            scanf("%d", &temp);
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());

        int a = 1;
        int b = arr[stab-1] - arr[0];
        int min;

        while (a <= b){
            int mid = (a + b)/2;
            if (verif(arr, mid, cow)){
                a = mid + 1; 
                min = mid;
            }
            else {
                b = mid-1;
            }
        }

        printf("%d\n", min);
    }
}
