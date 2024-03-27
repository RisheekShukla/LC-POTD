class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k<=1)
        {
            return 0;
        }
        int n = nums.size();
        int mux=1;
        int left=0;
        int ans=0;
        for(int right=0;right<n;right++)
        {
            mux*=nums[right];
            while(mux>=k)
            {
                mux=mux/nums[left];
                left++;
            }
            ans = ans + (right-left)+1;
        }
        return ans;
    }
};