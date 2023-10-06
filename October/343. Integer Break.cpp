class Solution {
public:
    int integerBreak(int n) {
        if(n==2||n==3)
        {
            return n-1;
        }
        vector<int>dp(n+1,-1);
        // tabulation way
        dp[1]=1;
        dp[2]=1;
        // dp[3]=2 nhi hoga kyu ki
        // dp[3]=3 and we already answered for n==3
        for(int i=3;i<=n;i++)
        {
            int temp = i;
            for(int j=2;j<i;j++)
            {
                temp = max(temp,j*dp[i-j]);
            }
            dp[i]=temp;
        }
        return dp[n];
    }
};
