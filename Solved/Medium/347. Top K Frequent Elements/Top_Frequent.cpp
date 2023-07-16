// Top K Frequent Elements
// Diffculty: Medium
// https://leetcode.com/problems/top-k-frequent-elements/
// Runtime: 20 ms (Beats 51.67%)
// Memory: 13.83 MB (beats 19.21%)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> ans;
        unordered_map <int, int> counter;

        for(auto x:nums){
            counter[x]++;
        }

        vector<pair<int,int> >  vp;

        for(auto x:counter){
            vp.push_back({x.second,x.first});
        }

        sort(vp.rbegin(), vp.rend());
        
        for(int i = 0; i < k; i++){
            ans.push_back(vp[i].second);
        }


        return ans;
    }
};
