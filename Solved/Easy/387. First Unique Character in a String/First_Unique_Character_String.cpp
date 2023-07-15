// First Unique Character in a String
// Difficulty: Easy
// https://leetcode.com/problems/first-unique-character-in-a-string/
// Runtime: 45 ms (Beats 52.80%)
// Memory Usage: 10.7 MB

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> letters;
        for(auto x:s){
            letters[x]++;
        }

        int index = 0;
        for(auto x:s){
            if(letters[x] == 1){
                return index;
            }
            index++;
        }

        return -1;
    }
};