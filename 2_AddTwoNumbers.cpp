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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* temp = l3;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry!=0)
        {
            int l1val = 0;
            int l2val = 0;
            if(l1!=nullptr)
            {
                l1val = l1->val;
            }
            if(l2!=nullptr)
            {
                l2val = l2->val;
            }
            temp->val = (l1val + l2val + carry)%10;
            carry = (l1val + l2val + carry)/10;
            
            if(l1!=nullptr)
            {
                l1 = l1->next;
            }
            if(l2!=nullptr)
            {
                l2 = l2->next;
            }
            if(l1!=nullptr || l2!=nullptr || carry != 0)
            {
                temp->next = new ListNode(0);
                temp = temp->next;
            }
        }
        
        return l3;
    }
};
