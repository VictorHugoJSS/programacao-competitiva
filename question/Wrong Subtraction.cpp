// Codeforces
// Question: 977A - Wrong Subtraction
// Student: Victor Hugo Jose Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){

    int number, number_of_substractions;

    cin >> number >> number_of_substractions;

    for (int k = 0; k < number_of_substractions; k++){

        if (number % 10 == 0){
            number /= 10;
        }
        else{
            number--;
        }
    }

    cout << number << '\n';
    return 0;
}