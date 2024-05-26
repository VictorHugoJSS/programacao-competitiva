#include <bits/stdc++.h>

using namespace std;

vector <int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, b, temp;
    cin >> n >> b;

    while (n != 0 && b != 0){

        for (int i = 0; i < b; i++){
            cin >> temp;
            vi.push_back(temp);
        }
        cin >> n >> b;
    }
    return 0;
}