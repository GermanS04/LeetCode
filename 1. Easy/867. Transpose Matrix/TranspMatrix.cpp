// Transpose Matrix
// Difficulty: Easy
// https://leetcode.com/problems/transpose-matrix/
// Runtime: 16 ms (Beats 41.11%)
// Memory Usage: 10.6 MB (Beats 27.06%)

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ret(n, vector<int> (m, 0));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ret[j][i] = matrix[i][j];
            }
        }
    
        return ret;
    }
};