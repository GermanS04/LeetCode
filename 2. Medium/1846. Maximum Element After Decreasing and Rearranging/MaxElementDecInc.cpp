// 1846. Maximum Element After Decreasing and Rearranging
// Difficulty : Medium
// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
// Runtime: 72 ms (Beats 85.82%)
// Memory: 51.52 MB (Beats 56.72%)


class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int ans = 1;

        sort(arr.begin(), arr.end());

        if(arr[0] != 1){
            arr[0] = 1;
            ans = 1;
        }

        for(int i = 0; i < arr.size() - 1; i++){
            if(abs(arr[i] - arr[i+1]) > 1){
                arr[i+1] = arr[i] + 1;
            }

            ans = max(ans, arr[i+1]);
        }

        return ans;
        
    }
};