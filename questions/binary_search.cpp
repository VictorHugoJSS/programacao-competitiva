// Sphere Online Judge
// Question: BSEARCH1 - Binary Search
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

vector <int> arr;

int verify (int position){
    int i = position;

    while (arr[i-1] == arr[position]){
        i--;
    }

    return i;
}
int binary_search(int size, int number){
    int a = 0, b = size-1;
    int k;
    while (a <= b){
        k = (a+b) / 2;

        if (arr[k] == number) { return verify(k); }
        if (arr[k] < number){
            a = k+1;
        }
        else { b = k-1; }
    }

    return -1;
}
int main(){
    int quant, TC, test;

    scanf("%d %d", &quant, &TC);

    for (int i = 0; i < quant; i++){
        scanf("%d", &test);
        arr.push_back(test);
    }

    while(TC--){
        int number;
        scanf("%d", &number);
        printf("%d\n", binary_search(quant, number));
    }
    return 0;
}