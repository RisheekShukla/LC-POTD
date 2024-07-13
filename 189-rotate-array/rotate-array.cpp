class Solution {
public:
    void rotate(vector<int>& nums, int k) {
                int n = nums.size();

        vector<int>forw;
        if(k==0||k==n)return;
        if(k>n)
        {
            k=k%n;
        }
        for(int i=n-k;i<n;i++)
        {
            forw.push_back(nums[i]);
        }
        for(int i=n-1;i>=k;i--)
        {
            nums[i] = nums[i-k];
        }
        for(int i=0;i<forw.size();i++)
        {
            nums[i] = forw[i];
        }
    }
};