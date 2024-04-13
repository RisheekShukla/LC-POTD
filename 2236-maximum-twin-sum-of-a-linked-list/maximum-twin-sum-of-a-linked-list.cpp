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
    ListNode* reverse(ListNode* temp)
    {
        ListNode* pvs = NULL;
        while(temp!=NULL)
        {
            ListNode* nxtptr = temp->next;
            temp ->next = pvs;
            pvs = temp;
            temp = nxtptr;
        }
        return pvs;
    }
public:
    int pairSum(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *pvs;
        while(fast!=NULL && fast->next!=NULL)
        {
            pvs = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        pvs->next = reverse(pvs->next);  
        pvs = pvs->next;
        int ans =0;
        while(pvs!=NULL)
        {
            ans = max(ans,pvs->val+head->val);
            pvs=pvs->next;
            head=head->next;
        }
        return ans;
    }
};