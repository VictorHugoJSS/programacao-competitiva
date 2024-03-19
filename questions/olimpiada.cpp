#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int paises, modalidades;

    cin >> paises >> modalidades;

    int ouro, prata, bronze;
    int o[paises+1], p[paises+1], b[paises+1];

    for (int i = 0; i < modalidades; i++){
        cin >> ouro >> prata >> bronze;

        o[ouro]++;
        p[prata]++;
        b[bronze]++;
    }
}