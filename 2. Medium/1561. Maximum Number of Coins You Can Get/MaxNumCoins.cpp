// 1561. Maximum Number of Coins You Can Get
// Difficulty: Medium
// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/
// Runtime: 99 ms (Beats 26.46%)
// Memory: 56.93 MB (Beats 5.61%)

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        deque<int> dq;

        sort(piles.begin(), piles.end());

        for(auto x:piles){
            dq.push_back(x);
        }

        int ans = 0;

        while(!dq.empty()){
            dq.pop_back();
            ans += dq.back();
            dq.pop_back();
            dq.pop_front();
        }

        return ans;
    }
};