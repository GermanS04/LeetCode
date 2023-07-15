// Two Sum
// Difficulty: Easy
// https://leetcode.com/problems/two-sum/
// Runtime: 21 ms (Beats 51.10%)
// Memory: 12.5 MB 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> obj;
        vector <int> ans;
        int index = 0, rest;

        for(auto x:nums){
            rest = target - x;
            obj[rest] = index;
            index++;
        }

        index = 0;
        for(auto x:nums){
            if(obj[x] && obj[x] != index){
                ans.push_back(index);
                ans.push_back(obj[x]);
                break;
            }
            index++;
        }

        return ans;

    }
};