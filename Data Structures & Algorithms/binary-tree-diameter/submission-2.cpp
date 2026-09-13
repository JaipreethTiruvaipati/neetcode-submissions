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
    int ans=0;
    map<TreeNode*,int>dp;
    int height(TreeNode*root){
        if(root==nullptr)return 0;
        if(dp.find(root)!=dp.end())return dp[root];
        int left=height(root->left);
        int right=height(root->right);
        return dp[root]= max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        int left=height(root->left);
        int right=height(root->right);
        ans=max(ans,left+right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return ans;
        
    }
};
