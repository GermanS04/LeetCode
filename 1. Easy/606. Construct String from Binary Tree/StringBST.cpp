// 606. Construct String from Binary Tree
// Difficulty : Easy
// https://leetcode.com/problems/construct-string-from-binary-tree/
// Runtime: 7 ms (Beats 94.49%)
// Memory: 24 MB (Beats 57.97%)


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode* root) {
        string ans = "";

        if(root == NULL){
            return ans;
        }


        travelT(root, ans);

        return ans;

    }

    void travelT(TreeNode* travel, string &s){
        if(travel == NULL){
            return;
        } else {
            s += to_string(travel->val);
        }

        if(travel->left != NULL || travel->right != NULL){
            s += '(';
            travelT(travel->left, s);
            s += ')';
        }

        if(travel->right != NULL){
            s += '(';
            travelT(travel->right, s);
            s += ')';
        }

    }
};