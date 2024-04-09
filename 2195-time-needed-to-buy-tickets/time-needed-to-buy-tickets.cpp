class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int ans=0;
        int afterk=0;
        for(int i=0;i<tickets.size();i++)
        {
            // if(i==k)
            // {
            //     continue;
            // }
            if(tickets[i]>=tickets[k])
            {
                if(i>k)
                {
                    afterk++;
                }
                ans += tickets[k];
            }
            else
            {
                ans += tickets[i];
            }
        }    
        return ans-afterk;
    }
};