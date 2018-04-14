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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode *n1, *n2;
        n1 = head;
        n2 = head;
        for(int i = 1; i <= n; i++)
        {
            n2 = n2->next;
        }
        //int flag;
        if(n2 == NULL)
            return head->next;
        while(n2!=NULL && n2->next!= NULL)
        {
            n1 = n1->next;
            n2 = n2->next;
        }
        //if(n1 == head)
            //head = n1->next;
        /*else*/ n1->next = n1->next->next;
        //else 
        return head;
    }
};
