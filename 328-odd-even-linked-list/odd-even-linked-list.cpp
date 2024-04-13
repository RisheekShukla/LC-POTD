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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* even = head;
        ListNode* Baseodd = head->next;
        ListNode* odd=head->next;
        while(odd!=NULL&&odd->next!=NULL)
        {
            ListNode* nxtele = odd->next;
            even->next = nxtele;
            ListNode*temp = nxtele->next;
            odd->next = temp;
            odd = odd->next;
            even = even->next;
        }    
        even->next = Baseodd;
        return head;
    }
};