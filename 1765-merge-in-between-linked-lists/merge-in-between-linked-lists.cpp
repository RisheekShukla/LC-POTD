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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* temp1 = list1;
        ListNode* val1;
        for(int i=0;i<b;i++)
        {
            if(i==a-1)
            {
                val1 = temp1;  
            }
            temp1 = temp1->next; 
        }
        val1->next = list2;
        ListNode*val2 = temp1->next;
        while(list2->next)
        {
            list2 = list2->next;
        }    
        list2->next = val2;
        return list1;
    }
};