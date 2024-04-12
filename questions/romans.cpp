#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, dist;

    scanf("%lf", &x);

    dist = (double) x * 1000 * 5280 / 4854 ;

    printf("%.0lf\n", dist);
}