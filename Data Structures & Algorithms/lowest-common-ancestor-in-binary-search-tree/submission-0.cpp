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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int num1=p->val;
        int num2=q->val;
        while(root){
            if(root->val==num1) return p;
            else if(root->val==num2) return q;
            else if(num1>root->val && num2>root->val)root=root->right;
            else if(num1<root->val && num2<root->val)root=root->left;
            else return root;
        }
        return nullptr;
    }
};
