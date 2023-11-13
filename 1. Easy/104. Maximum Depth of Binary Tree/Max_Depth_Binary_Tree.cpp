// Maximum Depth of Binary Tree
// Difficulty: Easy
// https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Runtime: 8 ms (Beats 76.90%)
// Memory Usage: 18.9 MB (Beats 98.02%)

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
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        int countL = maxDepth(root->left) + 1;
        int countR = maxDepth(root->right) + 1;

        return max(countL,countR);
    }
};