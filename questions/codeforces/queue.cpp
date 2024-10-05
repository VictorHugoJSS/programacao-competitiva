#include <bits/stdc++.h>

using namespace std;
    
int main(){
    int tc;
    int change = 0;

    scanf("%d", &tc);

    while (tc--){
        int k, f1, f2, f3, f4, f5;

        scanf("%d %d %d %d %d %d", &k, &f1, &f2, &f3, &f4, &f5);

        int student = f1 * 1 + f2 * 5 + f3 * 10 + f4 * 20 + f5 * 50;
        
        if (student == k){
            change += k; 
        }
        else{
            if (change >= (student - k)){
                change -= student - k;
            }
            else{
                printf("no\n");
                return 0;
            }
        }
    }

    printf("yes\n");
    return 0;
}