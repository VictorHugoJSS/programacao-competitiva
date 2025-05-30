#include <bits/stdc++.h>

using namespace std;

int main(){
    int C,G;

    scanf("%d %d", &C, &G);

    if (C == 1){
        printf("vivo e morto\n");
    }
    else if (C == 0 && G == 1){
        printf("vivo\n");
    }
    else{
        printf("morto\n");
    }

    return 0;
}
