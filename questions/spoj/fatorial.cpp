// Sphere Online Judge
// Question: Fatoria2 - Fatorial
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

long int fat (int number){
    if (number == 1 || number == 0){
        return 1;        
    }
    
    return number * fat(number-1);
}

int main(){
    int number;
    cin >> number;
    cout << fat(number) << "\n";
}