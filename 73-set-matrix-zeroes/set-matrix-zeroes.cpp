class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row0=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    if(j==0)
                    {
                        row0 = 0;
                    }
                    else
                    {
                        matrix[0][j]=0;
                    }
                }
            }
        }
        for(int i=m-1;i>0;i--)
        {
            for(int j=n-1;j>0;j--)
            {
                if(matrix[i][0]==0||matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        // now dependent row
        for(int i=1;i<n;i++)
        {
            if(matrix[0][0]==0)
            {
                matrix[0][i]=0;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(row0==0)
            {
                matrix[i][0]=0;
            }
        }

    }
};