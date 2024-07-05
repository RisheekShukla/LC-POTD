class Solution {
int rec(int ind,vector<int>&arr,vector<int>&dp)
{
    // pruning
    
    // basecase
    if(ind < 0)
    {
        return 0;
    }
    // dp check
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    // transition
    int ans=1;
    for(int j=ind-1;j>=0;j--)
    {
        if(arr[ind]>arr[j])
        {
            ans = max(ans,1+rec(j,arr,dp));
        }
    }
    return dp[ind] =ans;
    
}
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,rec(i,nums,dp));
        }
        return ans;
    }
};