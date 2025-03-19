#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    int mx = 1;

    cin >> t;

    for (int i = 0; i < t.size(); i++){
        int count = 0;

        for (int j = i+1;  j < t.size(); i++){
            if (t[i] != t[j]){
                break;
            }
            count++;
        }

        mx = max(mx, count);
    }

    printf("%d\n", mx);
    return 0;
}
