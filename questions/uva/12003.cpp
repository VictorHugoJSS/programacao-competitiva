#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int llu;

int main(){
    llu n, m, u;
    llu L, R, v, p;
    llu quant = 0;

    scanf("%llu %llu %llu", &n, &m, &u);
    vector<llu> values;

    while (n--){
        llu temp;
        scanf("%llu", &temp);
        values.push_back(temp);
    }

    while (m--){
        scanf("%llu %llu %llu %llu", &L, &R, &v, &p);
        llu j = L-1;
        
        while (j <= R-1){
            if (values[j] < v){
                quant++;
            }
            j++;
        }

        values[p-1] = u*quant/(R-L+1);
        quant = 0;
    }

    for(auto i : values){
        printf("%llu\n", i);
    }

    return 0;
}
