class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        int nrow = grid.size();
        int ncol = grid[0].size();
        vector<string>rowhash(ncol);
        vector<string>colhash(nrow);
        // hashing 
        for(int i=0;i<nrow;i++)
        {
            for(int j=0;j<ncol;j++)
            {
                string ss = to_string(grid[i][j]);
                rowhash[j]+=ss;
                rowhash[j]+=",";
                colhash[i]+=ss;
                colhash[i]+=",";
            }
        }
        int ans=0;
        for(int i=0;i<nrow;i++)
        {
            for(int j=0;j<ncol;j++)
            {
                if(rowhash[j]==colhash[i])
                {
                    ans++;
                }
            }
        }     
        return ans;
    }
};