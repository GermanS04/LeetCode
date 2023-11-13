// 1441. Build an Array With Stack Operations
// Difficult: Medium
// https://leetcode.com/problems/build-an-array-with-stack-operations/
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.09 MB (Beats 76.67%)



class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;

        int last = target[target.size() - 1], counter = 1, index = 0;

        for(int i = 0; i < last; i++){
            if(counter == target[index]){
                ans.push_back("Push");
                counter++;
                index++;
            } else {
                ans.push_back("Push");
                ans.push_back("Pop");
                counter++;
            }
        }

        return ans;


    }
};