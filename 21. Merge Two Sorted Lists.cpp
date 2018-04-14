/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* head = NULL;
        ListNode* ans;
        if(l1 == NULL && l2 == NULL)
        {
            return l1;
        }
        else if(l1 == NULL && l2 != NULL)
        {
            return l2;
        }
        else if(l1 != NULL && l2 == NULL)
        {
            return l1;
        }
        while(l1!=NULL&&l2!=NULL)
        {
            if(head==NULL)
            {
                if(l1->val < l2->val)
                {
                    head = l1;
                    l1 = l1->next;
                }
                else 
                {
                    head = l2;               
                    l2 = l2->next;
                }
                ans = head;
            }
            else
            {
                if(l1->val < l2->val)
                {
                    head->next = l1;
                    l1 = l1->next;
                }
                else 
                {
                    head->next = l2;               
                    l2 = l2->next;
                }
                head = head->next;
            }
        }
        if(head!=NULL)
        {
            if(l1!=NULL)
            {
                head->next = l1;
            }
            else            
            {
                head->next = l2;
            }
        }
        return ans;
    }
};
