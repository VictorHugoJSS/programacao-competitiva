#include <bits/stdc++.h>
using namespace std;

double fun(int p, int a, int b, int c, int d, int n){
    double value = 0;
    double max = p * (sin(a + b) + cos(c+d) + 2);
    for (int i = 2; i <= n; i++){
        double current = p * (sin((a*i + b)) + cos((c*i +d)) + 2);

        if (max > current){
            if (value < max - current){
                value = max - current;
            }
        }
        else{
            max = current;
        }
    }
    return value;
}

int main(){
    int p, a, b, c, d, n;
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);

    printf("%.9lf\n", fun(p,a,b,c,d,n));
}