#include <bits/stdc++.h>

using namespace std;
map<int,int> o;
map<int,int> p;
map<int,int> b;

void posicoes(int *arr){
    int max_ouro =INT_MIN;
    int max_prata = INT_MIN,max_bronze = INT_MIN; 
}
int main(){

    int paises, modalidades;

    scanf("%d %d", &paises, &modalidades);

    int ouro, prata, bronze;
    

    for (int i = 0; i < modalidades; i++){
        scanf("%d %d %d", &ouro, &prata, &bronze);

        o[ouro]++;
        p[prata]++;
        b[bronze]++;
    }
    int pos[paises];


}