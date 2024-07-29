// Beecrowd
// Question: 1267 - Pascal library/Biblioteca pascal
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d;
    

    scanf("%d %d", &n, &d);

    while (n && d){
        int total = 0;
        bool confirm = false;
        char dinners[d][n];

        for (int i = 0; i < d; i++){
            for (int j = 0; j < n; j++){
                scanf(" %c", &dinners[i][j]);
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < d; j++){
                if (dinners[j][i] == '1'){
                    total++;
                }
            }

            if (total == d){
                confirm = true;
                break;
            }
            total = 0;
        }

        if (confirm){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }

        scanf("%d %d", &n, &d);
    }
    
    return 0;
}