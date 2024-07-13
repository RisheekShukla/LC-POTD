class Solution {
    bool binsearch(vector<int>&matrix,int target)
    {
        int l=0;
        int r=matrix.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(target==matrix[mid])
            {
                return true;
            }
            else if(matrix[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        // col find
        for(int i=0;i<m;i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][n-1])
            {
                return binsearch(matrix[i],target);
            }
        }
        // finding int that array by BS
        return false;
    }
};