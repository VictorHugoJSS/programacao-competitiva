#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int strStr(string haystack, string needle) {
            
            int size = haystack.length()-needle.length();
            
            for (int i = 0; i <= size; i++){
                if (haystack.substr(i,needle.size()) == needle){
                    return i;
                }
            }
    
            return -1;
        }
};

int main(){
    Solution s;

    s.strStr("aaa", "aaaa");
}