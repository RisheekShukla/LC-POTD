class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int num;
        int ans = 1e9;
        for(int i=0;i<n;i++)
        {
            num = nums[i];
            for(int j=i;j<n;j++)
            {
                num = num | nums[j];
                if(num>=k)
                {
                    ans = min(ans,j-i+1);
                }
            }
        }    
        if(ans==1e9)
        {
            return -1;
        }
        return ans;
    }
};