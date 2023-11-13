// Sort Integers by The Number of 1 Bits
// Difficulty: Easy
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
// Runtime: 7 ms (beats 64.59%)
// Memory Usage : 11 MB (beats 28.82%)

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map <int, vector<int>> mapa;
        int max = 0, count;
        vector<int> ans;

        for(int i = 0; i <= arr.size()-1; i++){
            count = bitset<14>(arr[i]).count();
            mapa[count].push_back(arr[i]);

            if(count > max){
                max = count;
            }
        }

        for(int i = 0; i <= max; i++){
            if(!mapa[i].empty()){
                sort(mapa[i].begin(), mapa[i].end());
                for(auto x:mapa[i]){
                    ans.push_back(x);
                }
            }
        }


        return ans;
    }
};