class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int ind = 0;
        int ans;
        vector<int>vis(nums.size(),0);
        while(true)
        {
            if(vis[ind]==1)
            {
                ans = ind;
                break;
            }
            vis[ind]=1;
            ind = nums[ind];
        }
        return ans;
    }
};