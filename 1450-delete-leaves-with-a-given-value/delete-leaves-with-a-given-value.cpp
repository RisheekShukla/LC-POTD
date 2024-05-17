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
    TreeNode* func(TreeNode* node,int tar)
    {
        // BC
        if(node==nullptr)
        {
            return nullptr;
        }
           node->left =  func(node->left,tar);   


           node->right = func(node->right,tar);
           if(node->left==NULL && node->right==NULL&& node->val == tar)
        {
                return nullptr;
        }
       return node;
    }
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return func(root,target);
        return root;
    }
};