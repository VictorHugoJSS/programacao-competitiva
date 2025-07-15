#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,v, i = 1;
    
    scanf("%d %d", &a, &v);
    
    while (a && v){
        
        if (i != 1){
            printf("\n");
        }
        
        vector <int> traffic(a+1), airports;
        
        int x, y, mx = 0;
        
        for (int i = 0; i < v; i++){
            scanf("%d %d", &x, &y);
            traffic[y]++;
            traffic[x]++;
            mx = max(mx, max(traffic[y], traffic[x]));
        }
        
        for (int j = 1; j <= a; j++){
            if (traffic[j] == mx){
                airports.push_back(j);
            }
        }
        
        sort(airports.begin(), airports.end());
        
        printf("Teste %d\n", i++);
        for (int k = 0; k < airports.size(); k++){
            printf("%d", airports[k]);
            
            if (k < airports.size()-1){
                printf(" ");
            }
        }
        printf("\n");
        scanf("%d %d", &a, &v);    
    }
}
