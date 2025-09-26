#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        if (digits.size() == 1 && digits[0] == 9){
            digits.insert(digits.begin(), 1);
            digits[1] = 0;
            return digits;
        }

        for (int i = digits.size()-1; i >= 0; i--){
            if (i != 0 && digits[i] >= 9 && digits[i-1] < 9){
                digits[i-1] += 1;
                digits[i] = 0;
                break;
            }
            else if (i != 0 && digits[i] >= 9){
                digits[i-1] += 1;
                digits[i] = 0;
            }
            else if (i == 0 && digits[i] > 9){
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }
            else{
                digits[i] += 1;
                break;
            }
        }
        return digits;
    }
};



int main(){
    vector<int> v = {9,8,9};
    Solution s;

    v = s.plusOne(v);

    for (int i = 0; i < v.size(); i++){
        printf("%d", v[i]);

        if (i < v.size()-1){
            printf(" ");
        }
    }

    printf("\n");
}