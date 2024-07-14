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

    int findpathsum(TreeNode* root,int &maxi)
    {
        // bc
        if(root==NULL)
        {
            return 0;
        }
        int daya = max(0,findpathsum(root->left,maxi));
        int baya = max(0,findpathsum(root->right,maxi));
        maxi = max(maxi,daya+baya+root->val);
        return root->val+max(daya,baya);
    }

public:
    int maxPathSum(TreeNode* root) {
        if(root->left==NULL&&root->right==NULL)
        {
            return root->val;
        }
        int ans=-1e9;
        findpathsum(root,ans);
        return ans;
    }
};