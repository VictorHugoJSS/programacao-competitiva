#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n][m];
    vector<int> sumRow(n);
    vector<int> sumCol(m);
    int temp, total, best = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &temp);
            arr[i][j] = temp;
            sumRow[i] += temp;
            sumCol[j] += temp;

        }
    }

    for (int i = 0; i < n; i++){
        best = max(sumRow[i], best);
    }

    for (int j = 0; j < m; j++){
        best = max(sumCol[j], best);

    }
    printf("%d\n", best);
    return 0;
}