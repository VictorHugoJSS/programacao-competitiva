#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);
    getchar();

    while (tc--){
        map<char,int> mp;
        vector<char> arr;
        int mx = INT_MIN;
        string t;

        getline(cin, t);

        for (int i = 0; i < t.size(); i++){
            if (t[i] > 64 && t[i] <= 90){
                mp[t[i]+32]++;
            }
            if (t[i]>96 && t[i] <= 122){
                mp[t[i]]++;
            }
        }

        for (auto i : mp){
            mx = max(mx, i.second);
        }

        for (auto i : mp){
            if (mx == i.second){
                arr.push_back(i.first);
            }
        }
        sort(arr.begin(), arr.end());

        for (auto i : arr){
            printf("%c", i);
        }
        printf("\n");
    }
}