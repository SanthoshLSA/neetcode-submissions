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
    void rec(TreeNode* root,int maxn,int & ans){
        if(!root)return;
        if(root->val>=maxn){
            ans++;
            maxn = root->val;}
        rec(root->left,maxn,ans);
        rec(root->right,maxn,ans);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        int maxn = INT_MIN;
        rec(root,maxn,ans);
        return ans;
    }
};
