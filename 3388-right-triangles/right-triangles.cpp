class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>vert(m,0);
        vector<int>hori(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    vert[i]++;
                    hori[j]++;
                }
            }
        }    
        long long ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int a = vert[i]-1;
                    int b = hori[j]-1;
                    int val = max(0,a*b);
                    ans +=val;
                }
            }
        }    
        return ans;
    }
};