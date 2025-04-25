#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, days = 0;

    scanf("%d %d", &n, &k);

    vector<int> pebbles(n);
    vector<pair<int,int>> bolsos(n);


    for (int i = 0; i < n; i++){
        scanf("%d", &pebbles[i]);
    }

    int i = 0, j = 0;

    while (i < n){

        while (pebbles[i] != 0){

            if (bolsos[j].first < k){
                if (pebbles[i] >= k){
                    bolsos[j].first += k;
                    pebbles[i] -= k;
                }
                else{
                    bolsos[j].first += pebbles[i];
                    pebbles[i] = 0;
                }
            }
            else if (bolsos[j].second < k){
                if (pebbles[i] >= k){
                    bolsos[j].second += k;
                    pebbles[i] -= k;
                }
                else{
                    bolso[j].second += pebbles[i];
                    pebbles[i] = 0;
                }
            }
        }
        
        days++;
    }

    printf("%d\n", days);

    return 0;
}