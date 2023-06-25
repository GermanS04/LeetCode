# 9. Palindrome Number
# Difficulty: Easy
# https://leetcode.com/problems/palindrome-number/
# Runtime: 109 ms (Beats 5.01%)
# Memory: 13.9 MB (Beats 98.31%)

class Solution:
    def isPalindrome(self, x: int) -> bool:
        import math
        number = str(x)
        print(number[:math.ceil(len(number)/2)])
        print(number[-1:-math.ceil(len(number)/2)-1:-1])
        if number[:math.ceil(len(number)/2)] == number[-1:-math.ceil(len(number)/2)-1:-1]:
            return(True)
        else:
            return(False)