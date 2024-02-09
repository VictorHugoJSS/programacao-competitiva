#include <bits/stdc++.h>

using namespace std;
vector <int> vi;

void swap (int * x, int * y){
    int t = *x;
    *x = *y;
    *y = t;
}

int partition (int low, int high){
    int pivot = vi[high];
    int i = (low-1);

    for (int j = low; j <= high; j++){
        if (vi[j] < pivot){
            i++;
            swap(vi[i], vi[j]);
        }
    }
    swap(vi[i], vi[high]);
    return (i+1);
}
void quick_sort(int low, int high){
    if (low < high){
        int pi = partition()
    }
}
int main(){
    int n, l;
    scanf("%d %d", &n, &l);

    for (int i = 0; i < n; i++){
        int t;
        scanf("%d", &t);
        vi.push_back(t);
    }

}