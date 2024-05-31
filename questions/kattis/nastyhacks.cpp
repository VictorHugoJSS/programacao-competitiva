#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    
    scanf("%d", &tc);
    
    while (tc--){
        int r, e, c;
        
        scanf("%d %d %d", &r, &e, &c);
        
        if (r+c < e){
            printf("advertise\n");
        }
        else if (r+c == e){
            printf("does not matter\n");
        }
        else{
            printf("do not advertise\n");
        }
    }
    
    
    return 0;
}