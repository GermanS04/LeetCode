# Roman to Integer
# Difficulty: Easy
# https://leetcode.com/problems/roman-to-integer/
# Runtime: 108 ms 
# Memory: 14 MB (Beats 98.02%)

class Solution:
    def romanToInt(self, s: str) -> int:
        values = {'I':1,
                  'V':5,
                  'X':10,
                  'L':50,
                  'C':100,
                  'D':500,
                  'M':1000}
        sym = list(s)
        numval = []
        for letter in sym:
            if letter in values:
                letter = values[letter]
                numval.append(letter)
        for number in numval:
            try:
                if number < numval[numval.index(number)+1]:
                    numval[numval.index(number)+1] = numval[numval.index(number)+1] - number
                    del numval[numval.index(number)]
            except:
                None
        return(sum(numval))