// Valid Parentheses
// Difficulty : Easy
// https://leetcode.com/problems/valid-parentheses/
// Runtime: - ms (Beats 100%)
// Memory 6.24 MB

class Solution {
public:
    bool isValid(string s) {

        if(s.length()%2 != 0){
            return false;
        }

        stack <char> brackets;

        for(auto l:s){
            if(l == '(' || l == '[' || l == '{'){
                brackets.push(l);
            } else if(l == ')' || l == ']' || l == '}'){
                if(brackets.empty()){
                    return false;
                }
                if(brackets.top() != '(' && l == ')'){
                    return false;
                }
                if(brackets.top() != '{' && l == '}'){
                    return false;
                }
                if(brackets.top() != '[' && l == ']'){
                    return false;
                }
                brackets.pop();
            }

        }

        if(brackets.empty()){
            return true;
        } else {
            return false;
        }


    }
};