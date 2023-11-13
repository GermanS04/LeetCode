// 4. Median of Two Sorted Arrays
// Difficulty : Hard
// https://leetcode.com/problems/median-of-two-sorted-arrays/
// Runtime: 23 ms (Beats 74.87%)
// Memory: 90 MB (Beats 46.22%)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int tot = nums1.size() + nums2.size();
        int mid = tot/2;
        double ans = 0.0;

        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());

        if(tot%2 == 0){
            ans = (nums1[mid] + nums1[mid-1])/(2.0);
        } else {
            ans = nums1[mid] * 1.0;
        }

        return ans;
    }
};