// Find Mode in Binary Search Tree
// Difficulty: Easy
// https://leetcode.com/problems/find-mode-in-binary-search-tree/
// Runtime: 8 ms (beats 96.00%)
// Memory Usage : 25.8 MB (beats 35.69%)

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
    void travelTree(TreeNode* root, unordered_map<int, int> &mapa){
        if(root == NULL){
            return;
        }

        mapa[root->val]++;

        travelTree(root->left, mapa);
        travelTree(root->right, mapa);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        unordered_map<int, int> mapa;
        int maxVal = -10000;

        travelTree(root, mapa);

        for(auto x:mapa){
            if(maxVal < x.second){
                maxVal = x.second;
            }
        }

        for(auto x:mapa){
            if(x.second == maxVal){
                v.push_back(x.first);
            }
        }

        return v;
    }
};