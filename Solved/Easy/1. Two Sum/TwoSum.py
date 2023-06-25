# 1. Two Sum
# Difficulty: Easy
# https://leetcode.com/problems/two-sum/
# Runtime: 149 ms (Beats 41.72%)
# Memory: 15.1 MB (Beats 98.95%)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = dict()
        for index, number in enumerate(nums):
            diff = target - number
            if diff in seen:
                return([seen[diff], index])
            else:
                seen[number] = index