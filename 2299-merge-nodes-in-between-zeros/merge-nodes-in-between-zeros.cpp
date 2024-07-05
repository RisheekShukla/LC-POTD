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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head;
        ListNode *ddy = head;
        ListNode*pvs;
        int cursum=0;
        while(temp)
        {
            if(temp->val==0 && cursum!=0)
            {
                ddy->val = cursum;
                cursum=0;
                pvs=ddy;
                ddy=ddy->next;
            }
            cursum += temp->val;
            temp=temp->next;
        }
        pvs->next=NULL;
        return head;
    }
};