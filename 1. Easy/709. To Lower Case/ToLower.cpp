// To Lower Case
// Difficulty: Easy
// https://leetcode.com/problems/to-lower-case/
// Runtime: 0 ms (beats 100.00%)
// Memory Usage : 6.40 MB (beats 56.82%)

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 65 && s[i] <= 90){
                s[i] += 32;
            }
        }

        return s;
    }
};