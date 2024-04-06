#include <bits/stdc++.h>

using namespace std;

string num_to_bin(int num){
    string bin, bin_Reverse;
    while (num != 0){
        if (num % 2 != 0){
            bin.push_back('1');
        }
        else{
            bin.push_back('0');
        }
        num = num / 2;
    }
    for (int i = 0; i < bin.size(); i++){
        bin_Reverse.push_back(bin[bin.size()-i-1]);
    }
    return bin_Reverse;
}

string hex_to_bin (int num){
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    int num;
    int qtd_bin, qtd_hex;

    cin >> tc;

    while (tc--){
        cin >> num;

        cout << num_to_bin(num) << "\n";
    }
}