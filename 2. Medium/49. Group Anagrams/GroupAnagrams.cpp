// Group Anagrams
// Difficulty : Medium
// https://leetcode.com/problems/group-anagrams/
// Runtime: 47 ms (beats 37.84%)
// Memory: 20.7 MB (beats 39.99%)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        string acomodo;
        vector<string> alg;
        vector<vector<string>> mat;
        vector<string> words;
        int longitud;
        int indice;

        for(auto x:strs){
            acomodo = x;
            sort(acomodo.begin(),acomodo.end());
            if (map[acomodo].size() == 0){
                words.push_back(x);
                map[acomodo] = words;
                words.clear();
            } else {
                alg.push_back(x);
                words = map[acomodo];
                words.insert(words.end(),alg.begin(), alg.end());
                map[acomodo] = words;
                alg.clear();
                words.clear();
            }
        }

        for(auto x:map){
            mat.push_back(x.second);
        }
        return mat;
    }
};