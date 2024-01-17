// CSES problem set
// Question: weird algorithm

#include <iostream>

using namespace std;

int main(){
    long long int n;

    cin >> n;

    while (n != 1){
        cout << n << " ";
        if (n % 2 != 0){
            n = ( n * 3 ) + 1;
        }
        else{
            n = n / 2;
        }
    }

    cout << n << endl;
    return 0;
}