#include <bits/stdc++.h>

using namespace std;

int magic_square(int * arr, int size){
    int sum_total = 0, sum = 0;
    for (int i = 0; i < size; i++){
        sum_total += *(((arr+0*size)+i));
    }

    for (int i = 1; i < size; i++){
        sum = 0;
        for (int j = 0; j < size; j++){
            sum += *(((arr+i*size)+j));
        }

        if (sum != sum_total){
            return -1;
        }
    }

    for (int i = 0; i < size; i++){
        sum = 0;
        for (int j = 0; j < size; j++){
            sum += *(((arr+j*size)+i));
        }

        if (sum != sum_total){
            return -1;
        }
    }

    return sum_total;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << magic_square((int *)arr, n) << "\n";
    return 0;
}
