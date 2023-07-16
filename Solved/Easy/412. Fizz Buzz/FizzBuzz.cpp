// Fizz Buzz
// Difficulty: Easy
// https://leetcode.com/problems/fizz-buzz/
// Runtime: 4 ms (Beats 63.23%)
// Memory Usage: 7.9 MB (Beats 62.97%)

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        for(int i = 1; i < (n+1);i++){
            if(i%5 == 0 && i%3 == 0){
                answer.push_back("FizzBuzz");
            }else if(i%5 == 0){
                answer.push_back("Buzz");
            }else if(i%3 == 0){
                answer.push_back("Fizz");
            }else{
                answer.push_back(to_string(i));
            }
        }

        return answer;
    }
};