class Solution {
public:
    int maxDepth(string s) 
    {
        int n = s.size();
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                cnt++;
                ans = max(ans,cnt);
            }
            else if(s[i]==')')
            {
                cnt--;
            }
        }
        return ans;
    }
};