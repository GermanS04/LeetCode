// 1930. Unique Length-3 Palindromic Subsequences
// Difficulty: Medium
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences/
// Runtime: 264 ms (Beats 70.23%)
// Memory: 12.89 MB (Beats 87.21%)


class Solution {
public:
    int countPalindromicSubsequence(string s) {
        typedef pair<int, int> ii;

        int ans = 0;

        unordered_map <char, ii > mapa {
            {'a', ii(-1,-1)},
            {'b', ii(-1,-1)},
            {'c', ii(-1,-1)},
            {'d', ii(-1,-1)},
            {'e', ii(-1,-1)},
            {'f', ii(-1,-1)},
            {'g', ii(-1,-1)},
            {'h', ii(-1,-1)},
            {'i', ii(-1,-1)},
            {'j', ii(-1,-1)},
            {'k', ii(-1,-1)},
            {'l', ii(-1,-1)},
            {'m', ii(-1,-1)},
            {'n', ii(-1,-1)},
            {'o', ii(-1,-1)},
            {'p', ii(-1,-1)},
            {'q', ii(-1,-1)},
            {'r', ii(-1,-1)},
            {'s', ii(-1,-1)},
            {'t', ii(-1,-1)},
            {'u', ii(-1,-1)},
            {'v', ii(-1,-1)},
            {'w', ii(-1,-1)},
            {'x', ii(-1,-1)},
            {'y', ii(-1,-1)},
            {'z', ii(-1,-1)}
        };

        int ind = 0;
        for(auto x:s){
            if(mapa[x].first == -1){
                mapa[x].first = ind;
            } else {
                mapa[x].second = ind;
            }

            ind++;
        }

        unordered_set<char> sdfg;

        for(auto x:mapa){
            if(x.second.first != -1 && x.second.second != -1){
                for(int i = x.second.first + 1; i < x.second.second; i++){
                    sdfg.insert(s[i]);
                }

                ans += sdfg.size();
            }

            sdfg.clear();
        }

        return ans;
    }
};