class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int tar = tickets[k];
        int ans=tar;
        int afterk=0;
        for(int i=0;i<tickets.size();i++)
        {
            if(i==k)
            {
                continue;
            }
            if(tickets[i]>=tar)
            {
                if(i>k)
                {
                    afterk++;
                }
                ans += tar;
            }
            else
            {
                ans += tickets[i];
            }
        }    
        return ans-afterk;
    }
};