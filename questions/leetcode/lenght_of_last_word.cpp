#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int i, j, best = 0;
    
            for (i = 0; i < s.size(); i++){
                for (int j = i+1; j < s.size(); j++){
                    if (s[j] == ' '){
                    }
                }
    
                best = max(best, (int) s.substr(i, j).size());

                i = j;
            }
        }
    };