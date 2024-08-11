#include <bits/stdc++.h>
#define MAX 101
using namespace std;

struct olimpiadas{
    int ouro = 0;
    int prata = 0;
    int bronze = 0; 
};

int position[MAX];

void selection(olimpiadas *paises, int qtd){
    int max = INT_MIN;

    for (int i = 0; i < )
}
int main(){
    int qtd_paises, qtd_modalidades;
    int i = 0, j = 0;
    scanf("%d %d", &qtd_paises, &qtd_modalidades);

    int o, p, b;
    olimpiadas *paise = (olimpiadas *) malloc((qtd_paises+1) * sizeof(olimpiadas));
    while (i < qtd_modalidades){
        scanf("%d %d %d", &o, &p, &b);

        paise[o].ouro++;
        paise[p].prata++;
        paise[b].bronze++;

        i++; 
    }


    free(paise);
    return 0;
}