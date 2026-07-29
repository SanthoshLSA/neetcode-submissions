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
    int rec(TreeNode* root,int & ans){
        if(!root)return 0;
        int leftmax = max(0,rec(root->left,ans));
        int rightmax = max(0,rec(root->right,ans));
        ans = max(ans,root->val+leftmax+rightmax);
        return root->val + max(leftmax,rightmax);

    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        rec(root,ans);
        return ans;
    }
};
