// Merge Sorted Array
// Difficulty: Easy
// https://leetcode.com/problems/merge-sorted-array/
// Runtime: 0 ms (beats 100.00%)
// Memory Usage : 9.54 MB (beats 7.27%)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++){
            nums1[i + m] = nums2[i];
        }

        sort(nums1.begin(), nums1.end());
    }
};