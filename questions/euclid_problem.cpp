#include <bits/stdc++.h>

using namespace std;

long long int gcd (long long int a, long long int b){
    if (a == 0){
        return b;
    }
    if (b == 0){
        return a;
    }

    int k;
    for (k = 0; ((a|b) & 1) == 0; k++){
        a >>= 1;
        b >>= 1;
    }

    while ((a & 1) == 0)
        a >>= 1;
    do{

        while ((b & 1) == 0)
            b >>= 1;
        
        if (a > b)
            swap(a,b);
        
        b = (b - a);
    }while(b != 0);

    return a << k;
}

void find_x(long long int * y, long long int a, long long int b, long long int d){
    int i = a;

    while (1){
        if (abs(a*i - d) <= b){
            *y = i;
            break;
        }
        i--;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long int a, b, maxDiv;
    long long int x, y;
    while (cin >> a >> b){
        maxDiv = gcd(a, b);
        find_x(&x, a, b, maxDiv);
        y = (maxDiv - a*x)/b;
        cout << x << " "<< y << " " << maxDiv <<"\n";
    }
    
    return 0;
}
