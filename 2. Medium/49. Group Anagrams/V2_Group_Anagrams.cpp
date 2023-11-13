// Group Anagrams
// Difficulty : Medium
// https://leetcode.com/problems/group-anagrams/
// Runtime: 40 ms (beats 64.12%)
// Memory: 20.52 MB (beats 62.78%)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string> > um; 
        string sorted;

        for(auto x:strs){
            sorted = x;
            sort(sorted.begin(),sorted.end());
            um[sorted].push_back(x);
        }

        vector<vector<string> > ans;

        for(auto x:um){
            ans.push_back(x.second);
        }

        return ans;
    }
};