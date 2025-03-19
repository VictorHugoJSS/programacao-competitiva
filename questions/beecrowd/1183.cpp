#include <bits/stdc++.h>

using namespace std;

int main(){
    char select;
    double x[12][12];

    cin >> select;

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> x[i][j];
        }
    }

    double sum = 0;

    for (int i = 0; i < 12; i++){
        for (int j = i+1; j < 12; j++){
            sum += x[i][j];
        }
    }


    if (select == 'S'){
        printf("%.1lf\n", sum);
    }
    else{
        printf("%.1lf\n", sum/66);
    }

    return 0;
}