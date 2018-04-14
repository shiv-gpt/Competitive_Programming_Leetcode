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
    int maxDepth(TreeNode* root) {
       queue<TreeNode*> s;
        //vector<vector<int>> result;
        if(root == NULL)
        {
            return 0;
        }
        s.push(root);
        s.push(NULL);
        //vector<int> current;
        //bool flag=false;
        int level = 1;
        while(!s.empty())
        {
            TreeNode* node = s.front();
            s.pop();           
            if(node == NULL)
            {
                
                if(s.empty())
                    break;
                level++;
                s.push(NULL);
                //cout<<"flag=="<<flag<<endl;
                
            }
            else
            {
                
                if(node->left)
                    s.push(node->left);
                if(node->right)
                    s.push(node->right);
               
            }
        }       
        return level;
    }
};
