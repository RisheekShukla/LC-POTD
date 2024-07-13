class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int ans=0;
        int cnt=0;
        for(auto it:nums)
        {
            if(it==1)
            {
                cnt++;
                ans = max(ans,cnt);
            }
            else
            {
                ans = max(ans,cnt);
                cnt=0;
            }
        }    
        return ans;
    }
};