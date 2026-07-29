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
    TreeNode* build(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,unordered_map<int,int>&idx){
        if(prestart>preend || instart>inend)return NULL;
        TreeNode* root = new TreeNode(preorder[prestart]);
        int inroot = idx[root->val];
        int numsleft = inroot-instart;
        root->left = build(preorder,prestart+1,prestart+numsleft,inorder,instart,inroot-1,idx);
        root->right = build(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,idx);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> idx;
        for(int i=0;i<inorder.size();i++)idx[inorder[i]]=i;
        TreeNode* root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,idx);
        return root;
    }
};
