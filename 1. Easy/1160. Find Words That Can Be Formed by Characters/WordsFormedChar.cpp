// 1160. Find Words That Can Be Formed by Characters
// Difficulty: Easy
// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
// Runtime: 148 ms (Beats 22.79%)
// Memory: 49.64 MB (Beats 23.37%)

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mapa;

        for(auto x:chars){
            mapa[x]++;
        }

        bool flag;
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            unordered_map<char, int> mapComp;
            flag = 1;
            for(auto x:words[i]){
                mapComp[x]++;
            }

            for(auto x:mapComp){
                if(x.second > mapa[x.first]){
                    flag = 0;
                }
            }

            if(flag == 1){
                ans += words[i].length();
            }
        }

        return ans;
    }
};