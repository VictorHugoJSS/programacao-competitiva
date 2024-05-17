#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
vector <lli> vlli;

void scan_value(int q){
    lli t;
    for (int i = 0; i < q; i++){
        scanf("%lld", &t);
        vlli.push_back(t);
    }
}
int bitwise(int cards){
    int value = 0, i;
    for (i = 0; i < cards; i++){
        if (vlli[0] == 0 || vlli[i] == 0){
            value += vlli[i+1];
        }
        else{
            value += (vlli[i] & vlli[i+1]);
        }
    }
    return value;
}
int main(){
    int tc, i = 0;
    scanf("%d", &tc);

    while(tc--){
        int cards;
        scanf("%d", &cards);
        scan_value(cards);
        printf("Case %d: %d\n", i++, bitwise(cards));
        vlli.clear();
    }
    return 0;
}