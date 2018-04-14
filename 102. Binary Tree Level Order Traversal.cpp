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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue<TreeNode*> s;
        vector<vector<int>> result;
        if(root == NULL)
        {
            return result;
        }
        s.push(root);
        s.push(NULL);
        vector<int> current;
        while(!s.empty())
        {
            TreeNode* node = s.front();
            s.pop();           
            if(node == NULL)
            {
                result.push_back(current);
                current.clear();
                if(s.empty())
                    break;
                s.push(NULL);                
            }
            else
            {
                current.push_back(node->val);
                if(node->left)
                    s.push(node->left);
                if(node->right)
                    s.push(node->right);
            }
        }
        return result;
    }
};
