#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    
    while(1){
        scanf("%d", &n);
        
        if (n == 0){
            break;
        }
        
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }
        
        sort(v.begin(), v.end());
        
        for (int j = 0; j < v.size(); j++){
            printf("%d", v[j]);
            
            if (j < v.size()-1){
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
