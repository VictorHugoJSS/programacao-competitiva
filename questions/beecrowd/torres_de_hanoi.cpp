#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i = 0;
    int total;
    cin >> n;
    while (n != 0){
        if (n == 1){
            printf("Teste %d\n1\n\n", ++i);
        }
        else{
            total = pow(2, n)-1;
            printf("Teste %d\n%d\n\n", ++i, total);
        }
        cin >> n;
    }

    return 0;
}