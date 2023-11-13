// Find the Difference
// Difficulty : Easy
// https://leetcode.com/problems/find-the-difference/
// Runtime: 3 ms (Beats 67.78%)
// Memory: 6.6 MB (Beats 90.74%)

class Solution {
public:
    char findTheDifference(string s, string t) {
        queue <char> q;
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        for(auto x:t){
            q.push(x);
        }

        for(auto x:s){
            if(x != q.front()){
                return q.front();
            } else {
                q.pop();
            }
        }
        return q.front();
    }
};