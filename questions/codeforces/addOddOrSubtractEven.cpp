#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);

    while(tc--){
        int a, b, moves = 0;

        scanf("%d %d", &a, &b);

        if (a < b && ((b-a) % 2 == 0 )){
            printf("2\n");
        }
        else if (a < b && ((b-a) % 2 != 0)){
            printf("1\n");
        }
        else if (a > b && ((a-b) % 2 == 0)){
            printf("1\n");
        }
        else if (a > b && ((a-b) % 2 != 0)){
            printf("2\n");
        }
        else{
            printf("0\n");
        }

        
    }

    return 0;
}