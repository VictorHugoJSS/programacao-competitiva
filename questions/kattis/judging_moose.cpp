#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int left, right;

    cin >> left >> right;

    if (left == 0 && right == 0){
        cout << "Not a moose\n";
    }
    else if (left == right){
        cout << "Even " << left+right << "\n";
    }
    else{
        int num = max(left, right) * 2;
        cout << "Odd " << num << "\n";
    }
    
    return 0;
}