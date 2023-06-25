// Missing Numbers
// Difficulty : Easy
// https://leetcode.com/problems/missing-number/
// Runtime: 59 ms (Beats 5.12%)
// Memory 25.6 MB

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        set <int> set;
        for(auto x:nums){
            set.insert(x);
        }
        int count = 0;
        for(auto x:set){
            if (x != count){
                return count;
            }
            count += 1;
        }
        return n;
    }
};