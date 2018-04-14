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
    
    TreeNode* buildTree(vector<int>& nums, int i, int j)
    {
        if(i<=j)
        {
            int mid = (i+j)/2;        
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = buildTree(nums, i, mid-1);
            root->right = buildTree(nums, mid+1, j);
            return root;
        }        
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size()-1);
    }
};
