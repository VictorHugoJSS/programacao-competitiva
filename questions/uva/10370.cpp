#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    
    scanf("%d", &tc);
    
    while(tc--){
        int n, temp, sum = 0, upper = 0;
        
        scanf("%d", &n);
        
        vector<int> v(n);
        
        for (int i = 0; i < n; i++){
            scanf("%d", &v[i]);
            sum += v[i];
        }
        
        int mid = sum/n;
        
        for (int j = 0; j < n; j++){
            if (v[j] > mid){
                upper++;
            }
        }
        
        double perc = (double) upper/n * 100;
        printf("%.3lf%c\n", perc, 37);
    }
    
    return 0;
}
