#include <bits/stdc++.h>

using namespace std;

vector <int> vi;

int main(){
    int n, b, temp;
    scanf("%d %d", &n, &b);

    while (n && b){

        for (int i = 0; i < b; i++){
            cin >> temp;
            vi.push_back(temp);
        }
        scanf("%d %d", &n, &b);
    }
    return 0;
}