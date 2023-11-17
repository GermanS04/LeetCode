// 1877. Minimize Maximum Pair Sum in Array
// Difficulty: Medium
// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
// Runtime: 169ms (Beats 95.21%)
// Memory: 96.44 MB (Beats 94.23%)


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int size = nums.size(), ans = 0;
        for(int i = 0; i < size/2; i++){
            ans = max(nums[i] + nums[size - 1 - i], ans);
        }

        return ans;
    }
};