#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, i = 0;
    int x, y;
    char pos = 'O';
    scanf("%d", &tc);

    while (tc--){
        scanf("%d %d", &x, &y);

        if (pos == 'O' && x < y){
            pos = 'N';
        }
        else if (pos == 'O' && x > y){
            pos = 'L';
            i++;
        }
        else if (pos == 'N' && x < y){
            pos = 'O';
        }
        else if (pos == 'N' && x > y){
            pos = 'L'; 
        }
        else if (pos == 'N' && y > x){
            pos = 'N';
        }
    }
}