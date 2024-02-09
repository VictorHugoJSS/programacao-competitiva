#include <bits/stdc++.h>

using namespace std;
vector <pair<int,int>> vii;

int lining_up(){
    int quant = 0;
    for (int i = 0; i < vii.size(); i++){
        if (vii[i].first == vii[i].second){
            quant++;
        }
    }
    return quant;
}
int main(){
    int tc;

    scanf("%d", &tc);

    while (tc--){
        int a, b, max = 0;

        while (scanf("%d %d", &a, &b) && (a != EOF && b != EOF)){
            vii.push_back({a,b});
        }
        printf("%d\n\n", lining_up());
    }
    return 0;
}