class Solution {
    int rec(int i,int j,vector<vector<int>>&dp,string &text1,string &text2)
    {
        // pruning

        // basecase
        if(i==text1.size()||j==text2.size())
        {
            return 0;
        }
        // dpcheck
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        // transition
        int ans=0;
        if(text1[i]==text2[j])
        {
            ans = 1 + rec(i+1,j+1,dp,text1,text2);
        }
        else
        {
            ans = max(rec(i+1,j,dp,text1,text2),rec(i,j+1,dp,text1,text2));        
        }
        // save and return
        return dp[i][j]=ans;
    }
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n =  text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return rec(0,0,dp,text1,text2);
    }
};