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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr and q==nullptr)return true;
        if(p==nullptr and q!=nullptr)return false;
        if(p!=nullptr and q==nullptr)return false;
        if(p->val==q->val){
            return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr and subRoot==nullptr)return true;
        if(root!=nullptr and subRoot==nullptr)return true;
        if(root==nullptr and subRoot!=nullptr)return false;
        if(isSameTree(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
        
    }
};
