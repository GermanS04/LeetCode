// 2849. Determine if a Cell Is Reachable at a Given Time
// Difficulty : Medium
// https://leetcode.com/problems/determine-if-a-cell-is-reachable-within-maximum-moves/
// Runtime: 0 ms (Beats 100.00%)
// Memory: 6.2 MB (Beats 70.54%)


class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy && t==1) return 0;
        if(max(abs(fx-sx),abs(sy-fy))<=t) return 1;
        return 0;
    }
};