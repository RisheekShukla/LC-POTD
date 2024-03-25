class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        for(int i=1;i<=n;i++)
        {
            int ind =  nums[i-1]%(n+1);
            nums[ind-1] = nums[ind-1]+(n+1);
        } 
        vector<int>ans; 
        for(int i=1;i<=n;i++)
        {
            if((nums[i-1]/(n+1))>=2)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};