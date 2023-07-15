// Valid Anagram
// Difficulty: Easy
// https://leetcode.com/problems/valid-anagram/
// Runtime: 10 ms (Beats 65.38%)
// Memory: 7.33 MB (Beats 39.96%)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map <char, int> S, T;

        for(auto x:s){
            S[x]++;
        }

        for(auto x:t){
            T[x]++;
        }

        for(auto x:s){
            if(S[x] != T[x]){
                return false;
            }
        }

        return true;
    }
};