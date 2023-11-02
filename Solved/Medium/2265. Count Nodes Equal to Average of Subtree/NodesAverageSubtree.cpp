// 2265. Count Nodes Equal to Average of Subtree
// Difficulty: Medium
// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
// Runtime: 16 ms (Beats 28.40%)
// Memory: 12.3 MB (Beats 34.12%)


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
    int averageOfSubtree(TreeNode* root) {
        vector<int> vect;
        int ans = 0;

        travelTree(root, vect, ans);

        return ans;
    }

    void travelTree(TreeNode* root, vector<int> &vect, int &ans){
        if(!root){
            return;
        }

        exploreSubtree(root, vect);

        int sum = 0;

        for(auto x:vect){
            sum += x;
        }

        int average = sum / vect.size();

        if(average == root->val){
            ans++;
        }
        
        vect.clear();

        travelTree(root->left, vect, ans);
        travelTree(root->right, vect, ans);
    }

    void exploreSubtree(TreeNode* root, vector<int> &vect){
        if(!root){
            return;
        }

        vect.push_back(root->val);

        exploreSubtree(root->left, vect);
        exploreSubtree(root->right, vect);
    }
};