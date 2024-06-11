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
    int func(TreeNode*root,unordered_map<TreeNode *,int>&dp){

        if(root == NULL)return 0;
        if(dp.count(root)){
            return dp[root];
        }

        int take = 0, nottake = 0;;
        take = root->val;
        if(root->left){
            take+=(func(root->left->left,dp)+func(root->left->right,dp));
        }

        if(root->right){
            take+=(func(root->right->left,dp)+func(root->right->right,dp));
        }

        nottake = func(root->left,dp)+func(root->right,dp);
        return dp[root] = max(take, nottake);
    }
    int rob(TreeNode* root) {
        unordered_map<TreeNode *,int>dp;
        return func(root,dp);
    }
};