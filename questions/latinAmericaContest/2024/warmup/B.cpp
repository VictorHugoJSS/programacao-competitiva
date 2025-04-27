#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h, w;

    cin >> n >> h >> w;

    while (n--){
        char trip1, trip2;

        cin >> trip1 >> trip2;

        if (trip1 == 'Y' && trip1 == 'N'){
            if (h != 0 && w != 0){
                h--;
                w++;
            }
            else{
                w--;
                h++;
            }
        }
    }
}
