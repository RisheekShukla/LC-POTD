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
    ListNode* reverseIt(ListNode* node)
    {
        ListNode* pvs=NULL;
        while(node!=NULL)
        {
            ListNode* nxtptr = node->next;
            node->next = pvs;
            pvs = node;
            node = nxtptr;
        }
        return pvs;
    }
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = reverseIt(head);
        int crry=0;
        ListNode* nnn = temp;
        while(temp!=NULL)
        {
            int data = temp->val;
            temp->val = (temp->val*2+crry)%10;
            crry = (data*2 + crry)/10;
            if(temp->next==NULL)
            {
                break;
            }
            temp = temp->next;
        }
        if(crry>=1)
        {
            ListNode* teet = new ListNode(1);
            temp->next = teet;
            temp = teet;
        }
        ListNode* ans = reverseIt(nnn);
        return ans;
    }
};