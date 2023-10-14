// Random Note
// Difficulty: Easy
// https://leetcode.com/problems/ransom-note/
// Runtime: 19 ms (beats 41.79%)
// Memory: 9.1 MB (beats 39.29%)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magLetters;

        for(auto x:magazine){
            magLetters[x]++;
        }

        for(auto x:ransomNote){
            if(magLetters[x] == 0){
                return false;
            }
            magLetters[x]--;
        }

        return true;
    }
};