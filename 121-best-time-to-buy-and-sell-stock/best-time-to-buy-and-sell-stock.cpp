class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=1e9;
        int prof=0;
        for(auto it:prices)
        {
            if(it<mini)
            {
                mini = it;
            }
            // sell
            prof = max(prof,it-mini);
        }
        return prof;
    }
};