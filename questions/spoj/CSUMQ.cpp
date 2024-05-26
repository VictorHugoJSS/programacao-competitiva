// Sphere Online Judge
// Question: Cumulative Sum Query
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;
vector <int> vi;

int main(){
    int n, q;
    scanf("%d", &n);
    while (n--){
        int t;
        scanf("%d", &t);
        vi.push_back(t);
    }
    scanf("%d", &q);

    while (q--){
        int i, j, sum = 0;
        scanf("%d %d", &i, &j);
        while (i <= j){
            sum += vi[i];
            i++;
        }
        printf("%d\n", sum);
    }
    return 0;
}