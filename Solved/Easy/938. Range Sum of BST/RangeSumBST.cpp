// Range Sum of BST
// Difficult: Easy
// https://leetcode.com/problems/range-sum-of-bst/
// Runtime: 86 ms (beats 53.39%)
// Memory: 64.80 MB (beats 48.70%)

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
    int sum = 0;

    void sumBST(TreeNode* root, int low, int high){
        if(root == NULL){
            return;
        }


        if(root->val >= low && root->val <= high){
            sum += root->val;
            sumBST(root->left, low, high);
            sumBST(root->right, low, high);
        } else if(root->val > high){
            sumBST(root->left, low, high);
        } else if(root->val < low){
            sumBST(root->right, low, high);
        }
        
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        sumBST(root, low, high);
        return sum;
    }
};