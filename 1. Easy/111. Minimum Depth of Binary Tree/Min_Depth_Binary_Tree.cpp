// Minimum Depth of Binary Tree
// Difficulty: Easy
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Runtime: 295 ms (Beats 51.35%)
// Memory Usage: 146.41 MB (Beats 8.47%)

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
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        int countL = minDepth(root->left) + 1;
        int countR = minDepth(root->right) + 1;
        
        if(countR == 1){
            return countL;
        }

        if(countL == 1){
            return countR;
        }

        return min(countL,countR);

    }
};