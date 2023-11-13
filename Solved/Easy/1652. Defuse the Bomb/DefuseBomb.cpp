// 1652. Defuse the Bomb
// Difficulty: Easy
// https://leetcode.com/problems/defuse-the-bomb/
// Runtime: 3 ms (Beats 51.30%)
// Memory: 8.4 MB (Beats 97.68%)


class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;

        int sumatoria, contador;

        for(int i = 0; i < code.size(); i++){
            contador = 0;
            sumatoria = 0;

            if(k > 0){
                for(int j = i+1; contador < k; j++){
                    if(j >= code.size()){
                        j = 0;
                    }
                    sumatoria += code[j];
                    contador++;
                }
                ans.push_back(sumatoria);   
            }

            if(k == 0){
                ans.push_back(0);
            }


            if(k < 0){
                for(int j = i - 1; contador > k; j--){
                    if(j < 0){
                        j = code.size()-1;
                    }

                    sumatoria += code[j];
                    contador--;
                }
                ans.push_back(sumatoria);   
            }
        }



        return ans;
        
    }
};