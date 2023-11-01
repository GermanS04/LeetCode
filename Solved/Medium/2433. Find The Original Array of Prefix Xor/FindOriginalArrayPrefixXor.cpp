// Find The Original Array of Prefix Xor
// Difficulty: Medium
// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
// Runtime: 102 ms (beats 6.75%)
// Memory Usage : 79.67 MB (beats 19.38%)

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans {pref[0]};

        for(int i = 1; i < pref.size(); i++){
            ans.push_back(((~pref[i-1]) & pref[i]) | (pref[i-1] & (~pref[i])));
        }

        return ans;
    }
};