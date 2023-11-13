// 1759. Count Number of Homogenous Substrings
// Difficulty: Medium
// https://leetcode.com/problems/count-number-of-homogenous-substrings/
// Runtime: 14 ms (Beats 98.29%)
// Memory: 11.9 MB (Beats 97.57%)

class Solution {
public:
    int countHomogenous(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int modulo = pow(10, 9) + 7;
        long long ans = 0, counter = 1;
        

        // n(n+1)/2

        for(int i = 0; i < s.length(); i++){
            if(s[i] == s[i+1]){
                counter++;
            } else {
                ans += counter * (counter + 1) / 2;
                counter = 1;
            }
        }

        return ans%modulo;


    }
};