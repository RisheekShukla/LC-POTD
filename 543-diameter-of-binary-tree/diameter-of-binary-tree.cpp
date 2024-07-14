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
    int finddiam(TreeNode* root,int& maxi)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftt = finddiam(root->left,maxi);
        int rightt = finddiam(root->right,maxi);
        maxi = max(maxi,leftt+rightt);
        return 1 + max(leftt,rightt);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        finddiam(root,ans);
        return ans;
    }
};