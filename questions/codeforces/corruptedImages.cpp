#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);<

    while(tc--){
        int n, m;

        scanf("%d %d", &n, &m);

        vector<vector<int>> m(n, vector<int>(m));

        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &m[i][j]);
            }
        }

        
    }

    return 0;
}