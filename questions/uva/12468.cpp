#include <bits/stdc++.h>

using namespace std;

int main(){
    int current, channel, total;
    int op1, op2;
    scanf("%d %d", &current, &channel);

    while (current != -1 && channel != -1){

        if (current > channel){
            op1 = current - channel;
            op2 = 100+channel-current;
        }
        else{
            op1 = channel - current;
            op2 = 100 + current - channel;
        }

        printf("%d\n", min(op1, op2));
        scanf("%d %d", &current, &channel);
    }
    
    return 0;
}