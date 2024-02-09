// Kattis
// Question: Faktor
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

using namespace std;

int main(){
    int scientist;
    double article, impact;
    
    scanf("%lf %lf", &article, &impact);

    scientist = article * (impact-1) + 1;
    
    printf("%d\n", scientist);
    return 0;
}