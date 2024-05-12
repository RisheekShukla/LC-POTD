class Solution {
    int do_something(int x,int y,vector<vector<int>>&grid)
    {
        int ans=-1e9;
        for(int i=-1;i<2;i++)
        {
            for(int j=-1;j<2;j++)
            {
                ans = max(ans,grid[x+i][y+j]);
            }
        }
        return ans;
    }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2));
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                ans[i-1][j-1] = do_something(i,j,grid);
            }
        }
        return ans;
    }
};


