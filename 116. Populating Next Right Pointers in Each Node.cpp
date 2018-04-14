/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connectright(TreeLinkNode *n1, TreeLinkNode* n2)
    {
        if(n1!=NULL)
        {
            n1->next = n2;
            connectright(n1->left, n1->right);
            if(n2!=NULL)
            {
                connectright(n1->right, n2->left);
                connectright(n2->left, n2->right);
            }
        }
        else if(n2!=NULL)
        {
             connectright(n2->left, n2->right);
        }
        else
        {
            return;
        }    
    }
    
    void connect(TreeLinkNode *root) {
        if(root==NULL)
            return;
        else
        {
             connectright(root->left, root->right);
        }
    }
};
