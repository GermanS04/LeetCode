// 1980. Find Unique Binary String
// Difficulty: Medium
// https://leetcode.com/problems/find-unique-binary-string/
// Runtime: 0 ms (Beats 100.00%)
// Memory: 10.80 MB (Beats 43.66%)

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int size = nums.size();
        unordered_set<string> s;

        for(auto bin:nums){
            s.insert(bin);
        }
        
        string low = "0";

        for(int i = 0; i < size - 1; i++){
            low += "0";
        }

        s.insert(low);
        if(s.size() != size){
            return low;
        }

        for(int i = 0; i < low.length(); i++){
            low[i] = '0';
            s.insert(low);
            if(s.size() != size){
                break;
            }

            low[i] = '1';
            s.insert(low);
            if(s.size() != size){;
                break;
            }
        }

        return low;
    }
};