// Contains Duplicate
// Difficulty: Easy
// https://leetcode.com/problems/contains-duplicate/
// Runtime: 134 ms (Beats 88.53%)
// Memory Usage: 69.48 MB (Beats 60.49%)


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int counter = 1;

        for(auto x:nums){
            s.insert(x);
            if(s.size() != counter){
                return true;
            }
            counter++;
        }

        return false;
    }
};