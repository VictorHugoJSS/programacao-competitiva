#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while (scanf("%d", &n) != EOF){
        vector<int> arr;
        stack<int> s;
        int mx = INT_MIN, action, num;
        string res = "";

        for (int i = 0, j = 0; i < n; i++){
            scanf("%d %d", &action, &num);

            if (action == 1){
                arr.push_back(num);
                s.push(num);
                mx = max(mx, num);
            }
            else if (action == 2 && num == arr[j] && num != mx && num != s.top()){
                res = "queue\n";
            }
            else if (action == 2 && num == s.top() && num != mx && num != arr[j]){
                res = "stack\n";
                s.pop();
            }
            else if (action == 2 && num == mx && num != arr[j] && num != s.top()){
                res = "priority queue\n";
            }
            else if (action == 2 && ((num == mx && num == s.top()) || (num == mx && num == arr[j]) || (num == s.top() && num == arr[j]))){
                res = "not sure\n";
                s.pop();
            }
            else{
                j++;
                res = "impossible\n";
            }
        }

        cout << res;
    }

    return 0;
}