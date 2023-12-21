// BEECROWD
// Question: 1145
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    int i = 1, j = 1;
    cin >> x >> y;

    while (i <= y){

        if (j != x){
            cout << i << " ";
            j++;
        }
        else{
            cout << i <<"\n";
            j = 1;
        }
        i++;
    }
    return 0;
}