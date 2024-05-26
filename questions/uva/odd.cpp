#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests, diff, arr[3];
    cin >> tests;

    for (int i = 0; i < tests; i++){

        for (int j = 0; j < 3; j++){
            cin >> arr[j];
        }

        for (int j = 0; j < 3; j++){
            
            for (int k = 0; k < 3; k++){
                if (arr[j] != arr[k]){
                    diff = arr[j];
                    break;
                }   
            }
            if (arr[j] == diff){
                break;
            }
        }
        cout << diff << "\n";
    }
    return 0;
}