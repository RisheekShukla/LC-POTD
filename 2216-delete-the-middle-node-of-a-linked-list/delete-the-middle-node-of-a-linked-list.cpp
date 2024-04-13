/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {   
        if(head==NULL || head->next==NULL)
        {
            head = NULL;
            return head;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* pvs;
        while(fast!=NULL&&fast->next!=NULL)
        {
            pvs = slow;
            slow = slow -> next;
            fast = fast->next->next;
        }
        pvs->next = slow ->next;
        return head;
    }
};