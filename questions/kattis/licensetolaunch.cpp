#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, temp;
    int min = INT_MAX, day;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++){
        scanf("%d", &temp);

        if (temp < min){
            min = temp;
            day = i;
        }
    }

    printf("%d\n", day);
    return 0;
}