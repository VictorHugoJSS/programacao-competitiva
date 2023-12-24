// Neps Academy
// Question: Greastest Number
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, greastest = 0;

    while (1){
        cin >> n;

        if (n == 0){
            break;
        }

        if (n > greastest){
            greastest = n;
        }
    }

    cout << greastest << "\n";
    return 0;
}