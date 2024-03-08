#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    double qaly = 0;

    scanf("%d", &tc);

    while (tc--){
        double q, y;

        scanf("%lf %lf", &q, &y);

        qaly += q * y; 
    }

    printf("%.3lf\n", qaly);
}