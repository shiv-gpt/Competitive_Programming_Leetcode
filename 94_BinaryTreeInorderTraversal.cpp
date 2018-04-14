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
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;
        if(root == NULL)
            return result;
        stack<TreeNode*> s;
        
        
        cout<<s.size();
        TreeNode* current = root;
        while(1)
        {
            if(current)
            {
                s.push(current);
                current = current->left;
            }
            else
            {
                if(s.empty()) break;
                current = s.top();
                s.pop();
                result.push_back(current->val);
                current = current->right;
                    
            }
            
        }
        
        return result;
    }
};
