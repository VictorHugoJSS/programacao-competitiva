// NEPS Academy
// Question: Simple sorting
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

void swap (int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void bubble_sort(int size, int * arr){
    for (int i = 0; i < size-1; ++i){
        for (int j = 0; j < size-i-1; ++j){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print_array(int size, int * arr){
    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
        if (i < size-1){
            printf(" ");
        }
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    int numbers[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }
    bubble_sort(n, numbers);
    print_array(n, numbers);
}