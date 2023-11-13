// Invert Binary Tree
// Difficulty: Easy
// https://leetcode.com/problems/invert-binary-tree/
// Runtime: 0 ms (beats 100.00%)
// Memory: 10.3 MB (beats 9.58%)


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
    TreeNode* invertTree(TreeNode* root) {
        invTree(root);
        return root;
    }

    void invTree(TreeNode* root){
        if(root){
            TreeNode* aux = root->left;
            root->left = root->right;
            root->right = aux;

            invertTree(root->left);
            invertTree(root->right);
        }
    }
};