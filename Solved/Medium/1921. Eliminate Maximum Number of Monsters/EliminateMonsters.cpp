// 1921. Eliminate Maximum Number of Monsters
// Difficulty: Medium
// https://leetcode.com/problems/eliminate-maximum-number-of-monsters/
// Runtime: 114 ms (Beats 39.18%)
// Memory Usage: 83.2 MB (Beats 79.99%)

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();

        vector<float> time(n);

        for(int i = 0; i < n; i++){
            time[i] = dist[i]/(speed[i]*1.0);
        }

        sort(time.begin(), time.end());

        for(int i = 0; i < n; i++){
            if(time[i] <= i){
                return i;
            }
        }

        return n;
    }
};