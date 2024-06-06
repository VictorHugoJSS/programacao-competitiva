#include <bits/stdc++.h>

using namespace std;

int getvalue(int a1, int a2){
    if (a2 > a1){
        swap(a2, a1);
    }
    if (a1 == 2 && a2 == 1){
        return 10000;
    }
    else if (a1 == a2){
        return a1 * 1000;
    }
    return a1 * 10 + a2;
}
int main(){
    int s0, s1, r0, r1;

     cin >> s0 >> s1 >> r0 >> r1;

    while (s0 != 0 && s1 != 0 && r0 != 0 && r1 != 0){
        int value1 = getvalue(s0, s1);
        int value2 = getvalue(r0, r1);
        if (value1 == value2){
            printf("Tie.\n");
        }
        else if (value1 > value2){
            printf("Player 1 wins.\n");
        }
        else{
            printf("Player 2 wins.\n");
        }
        cin >> s0 >> s1 >> r0 >> r1;
    }

    return 0;
}