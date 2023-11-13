// 2785. Sort Vowels in a String
// Difficulty: Medium
// https://leetcode.com/problems/sort-vowels-in-a-string/
// Runtime: 32 ms (Beats 88.91%)
// Memory: 12.4 MB (Beats 66.18%)

class Solution {
public:
    string sortVowels(string s) {
        vector<char> eve;

        for(auto x:s){
            if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
                eve.push_back(x);
            }
        }

        sort(eve.begin(), eve.end());

        int counter = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                s[i] = eve[counter];
                counter++;
            }
        }

        return s;

    }
};