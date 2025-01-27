#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    int i = 1;

    while (n){
        if (i != 1){
            printf("\n");
        }

        int part, win;

        for (int j = 1; j <= n; j++){
            scanf("%d", &part);

            if (part == j){
                win = part;
            }
        }

        printf("Teste %d\n%d\n", i++, win);
        scanf("%d", &n);
    }
}