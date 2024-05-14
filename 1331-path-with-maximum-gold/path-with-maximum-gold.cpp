class Solution {
    int findthis(int x,int y,vector<vector<int>>&grid,int m,int n)
    {
        // BC
        if(x<0||y<0||x>=m||y>=n||grid[x][y]==0)
        {
            return 0;
        }
        // vis[x][y]=1;
        int vall = grid[x][y];
        grid[x][y]=0;

        // stuff
        int up = findthis(x-1,y,grid,m,n);
        int down =findthis(x+1,y,grid,m,n);
        int left = findthis(x,y-1,grid,m,n);
        int right = findthis(x,y+1,grid,m,n);

        grid[x][y] = vall;
        return vall + max(up,max(down,max(left,right)));
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        // vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0)
                {
                   ans = max(ans,findthis(i,j,grid,m,n)); 
                }
            }
        }
        return ans;
    }
};