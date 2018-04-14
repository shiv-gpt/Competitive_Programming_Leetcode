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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> s;
        vector<vector<int>> result;
        if(root == NULL)
        {
            return result;
        }
        s.push(root);
        s.push(NULL);
        vector<int> current;
        bool flag=false;
        while(!s.empty())
        {
            TreeNode* node = s.front();
            s.pop();           
            if(node == NULL)
            {
                if(flag)
                    reverse(current.begin(),current.end());
                result.push_back(current);
                current.clear();
                flag=(flag)?false:true;
                if(s.empty())
                    break;
                s.push(NULL);
                //cout<<"flag=="<<flag<<endl;
                
            }
            else
            {
                current.push_back(node->val);
                //cout<<node->val<<endl;

                if(node->left)
                    s.push(node->left);
                if(node->right)
                    s.push(node->right);
               
            }
        }
        return result;
    }
};
