// Move Zeroes
// Difficult: Easy
// https://leetcode.com/problems/move-zeroes/
// Runtime: 16 ms (Beats 97.90%)
// Memory: 20.45 MB (Beats 5.86%)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> ans;
        int contador = 0;

        for(auto x:nums){
            if(x != 0){
                ans.push_back(x);
            } else {
                contador++;
            }
        }

        vector<int> z(contador);

        ans.insert(ans.end(),z.begin(),z.end());

        nums = ans;

    }
};