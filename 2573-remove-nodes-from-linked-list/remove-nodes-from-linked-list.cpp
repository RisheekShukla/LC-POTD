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
    ListNode* reverselink(ListNode* node)
    {
        ListNode* pvs = NULL;
        while(node!=NULL)
        {
            ListNode* nextptr = node->next;
            node->next = pvs;
            pvs = node;
            node = nextptr;
        }
        return pvs;
    }
public:
    ListNode* removeNodes(ListNode* head) 
    {
        stack<int>st;
        ListNode* temp = head;
        ListNode* max=head;
        while(temp!=NULL)
        {

            // // max wala kaam
            // if(temp->val>max->val)
            // {
            //     max = temp;
            // }
            // stack work
            if(st.empty() || temp->val<=st.top())
            {
                st.push(temp->val);
            }
            else
            {
                while(!st.empty() && st.top()<temp->val)
                {
                    st.pop();
                }
                st.push(temp->val);
            }
            temp=temp->next;
        }
        ListNode* dumm = max;
        while(!st.empty())
        {
            max->val = st.top();
            st.pop();
            if(st.empty())
            {
                max->next = NULL;
                break;
            }
            max = max->next;
        }
        ListNode* ans = reverselink(dumm);
        return max;
    }
};