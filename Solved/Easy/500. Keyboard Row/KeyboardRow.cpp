// Keyboard Row
// Difficult: Easy
// https://leetcode.com/problems/keyboard-row/
// Runtime: 4 ms (Beats 35.48%)
// Memory: 6.6 MB (Beats 97.93%)

class Solution {
public:

    void isValid(string word, string row, vector<string> &answer, char firstL, int &validn){
        validn = 1;
        if(row.find(firstL) != string::npos){
            for(auto letter:word){
                if(row.find(tolower(letter))==string::npos){
                    validn = 0;
                    break; 
                }
            }

            if(validn == 1){
                answer.push_back(word);
                return;
            } 
        }
        return;
    }

    vector<string> findWords(vector<string>& words) {
        string firstR = "qwertyuiop", secondR = "asdfghjkl", thirdR = "zxcvbnm";
        int valid=1;
        char firstL;
        vector<string> answ;

        for(auto word:words){
            firstL = tolower(word[0]);
            isValid(word,firstR,answ,firstL,valid);
            isValid(word,secondR,answ,firstL,valid);
            isValid(word,thirdR,answ,firstL,valid);
        }

        return answ;
    }
};