#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int firstNumber, secondNumber;
    
    while (scanf("%lld %lld", &firstNumber, &secondNumber) != EOF){
        long long int diff; 
        diff = abs(firstNumber - secondNumber);
        printf("%lld\n", diff);
    }
    return 0;

}