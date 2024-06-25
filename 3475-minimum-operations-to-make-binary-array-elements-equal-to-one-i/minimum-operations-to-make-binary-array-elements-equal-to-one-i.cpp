class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]==1)
            {
                continue;
            }
            // flip
            ans++;
            nums[i] = !nums[i];
            nums[i+1] = !nums[i+1];
            nums[i+2] = !nums[i+2];
        }
        if((nums[n-1]&&nums[n-2])!=1)
        {
            return -1;
        }
        return ans;
    }
};