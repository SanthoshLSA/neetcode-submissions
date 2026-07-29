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
    void inorder(TreeNode* root,int& maxv,bool& ans){
        if(!root)return;
        inorder(root->left,maxv,ans);
        if(maxv>=root->val)ans=false;
        else maxv=root->val;
        inorder(root->right,maxv,ans);
        
    }
    bool isValidBST(TreeNode* root) {
        int maxv=INT_MIN;
        bool ans=true;
        if(!root)return true;
        inorder(root,maxv,ans);
        return ans;
    }
};
