#include <bits/stdc++.h>

using namespace std;


vector<long long> decToBin(long long n){
    long long num = static_cast<unsigned long long>(n);
    vector<long long> binary;

    while (num != 0){
        unsigned long long bit = num & 1;

        if (bit == 1){
            binary.push_back(bit);
        }
        else{
            binary.push_back(bit);
        }

        num >>= 1;
    }

    return binary;
}

bool pali(vector<long long> t){

    for (int i = 0; i < t.size(); i++){
        if (t[i] != t[t.size()-1-i]){
            return false;
        }
    }

    return 1;
}

int main(){
    long long int n;

    scanf("%lld", &n);

    while (n >= 1){

        if (n % 2 == 0){
            n--;
        }

        vector<long long> arr = decToBin(n);
        if (pali(arr)){
            break;
        }
        n--;
    }

    printf("%lld\n", n);
}