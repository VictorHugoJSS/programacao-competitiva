class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> t;

        for (int i = 0; i < nums.size(); i++){
            int x = target - nums[i];
            if (t.count(x)){
                return {t[x], i};
            }
            t[nums[i]] = i; 
        }
        return {};
    }
};
