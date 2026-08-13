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
    void rec(TreeNode* root,int sum,bool& ans){
        if(!root){
            return;}
             sum -= root->val;
        if(!root->left && !root->right){
            if(sum==0)ans = true;
            return;
        }
        rec(root->left,sum,ans);
        rec(root->right,sum,ans);


    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       
        bool ans = false;
        rec(root,targetSum,ans);
        return ans;
    }
};