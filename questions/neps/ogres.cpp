#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    long long temp;

    scanf("%d %d", &n, &m);

    vector<long long> f;
    vector<long long> p;
    vector<long long int> o(m);

    for (int i = 0; i < n-1; i++){
        scanf("%lld", &temp);
        f.push_back(temp);
    }
    
    for (int i = 0; i < n; i++){
        scanf("%lld", &temp);
        p.push_back(temp);
    } 

    for (int i = 0; i < m; i++){
        scanf("%lld", &temp);

        if (temp < f[0]){
            o[i] = p[0];
        }
        else if (temp >= f[f.size()-1]){
            o[i] = p[p.size()-1];
        }
        else{
            for (int j = 0; j < p.size()-1; j++){
                if (temp >= f[j] && temp < f[j+1]){
                    o[i] = p[j+1];
                    break;
                }
            }
        }
    }

    for (int i = 0; i < o.size(); i++){
        printf("%lld", o[i]);

        if (i < o.size()-1){
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
