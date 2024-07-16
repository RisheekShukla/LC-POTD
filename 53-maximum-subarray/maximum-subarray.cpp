class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans=-1e9;
        int cursum=0;
        for(auto it:nums)
        {
            cursum+=it;
            if(cursum>ans)
            {
                ans = cursum;
            }
            if(cursum<0)
            {
                cursum=0;
            }
            // ans = max(ans,cursum);
        }
        return ans;
    }
};