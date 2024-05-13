class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<int>horiz(m,0);
        for(int i=0;i<n;i++)
        {
            // if(grid[i][0]==0)
            // {
                bool flag = false;
                for(int j=0;j<m;j++)
                {
                    if(grid[i][0]==0||flag==true)
                    {
                        flag = true;
                        grid[i][j]= !grid[i][j];
                    }
                    horiz[j] += !grid[i][j];
                    if(grid[i][j]==1)
                    {
                        cnt += (1<<m-j-1);
                    }
                }
            // }
        }
        for(int i=1;i<m;i++)
        {
            int nr_ones = n-horiz[i];
            int nr_zero = horiz[i];
            if(nr_ones<nr_zero)
            {
                cnt += ((1<<m-i-1)*(nr_zero-nr_ones));
            }
        }
        return cnt;

    }
};