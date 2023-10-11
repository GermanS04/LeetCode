// Search in a Binary Search Tree
// Difficult: Easy
// https://leetcode.com/problems/search-in-a-binary-search-tree/
// Runtime: 31 ms  (beats 62.53%)
// Memory Usage: 34.9 MB (beats 35.71%)

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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *travel = root;

        while(travel != NULL){
            if(travel->val == val){
                return travel;
            } else if(val < travel->val){
                travel = travel->left;
            } else {
                travel = travel->right;
            }
        }

        return NULL;
    }
};