class Solution {
public:
    int minOperations(vector<int>& nums) {
        int  n = nums.size();
        int flag = false;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(flag)
            {
                if(nums[i]==1)
                {
                    ans++;
                    flag = !flag;
                }
            }
            else
            {
                if(nums[i]==0)
                {
                    ans++;
                    flag = !flag;
                }
            }
        }
        return ans;
    }
};