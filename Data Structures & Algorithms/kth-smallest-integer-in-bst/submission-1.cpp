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
    void rec(TreeNode* root,vector<int>&res){
        if(!root)return;
        rec(root->left,res);
        res.push_back(root->val);
        rec(root->right,res);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        rec(root,res);
        for(int x:res)cout<< x << " ";
        return res[k-1];
    }
};
