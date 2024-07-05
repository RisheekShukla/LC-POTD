class Solution {
int rec(int ind,int last,vector<int>&arr,vector<vector<int>>&dp,int n)
{
    // pruning
    
    // basecase
    if(ind >= n)
    {
        return 0;
    }
    // dp check
    if(dp[ind][last]!=-1)
    {
        return dp[ind][last];
    }
    // transition
    int left=0;
    if(last==n||arr[ind]>arr[last])
    {
        left = 1+rec(ind+1,ind,arr,dp,n);
    }
    int right = rec(ind+1,last,arr,dp,n);
    return dp[ind][last] = max(left,right);
    
}
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return rec(0,n,nums,dp,n);
    }
};