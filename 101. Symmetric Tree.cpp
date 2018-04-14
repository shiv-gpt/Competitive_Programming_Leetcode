/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* left, TreeNode* right)
    {
        if(left==NULL || right==NULL)
            return left==right;
        if(left->val!=right->val)
            return false;
        return check(left->left, right->right) && check(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        return root==NULL || check(root->left, root->right);
    }
    
    

};
