class Solution {
    void doSomething(int ind,int &ans,int temp,vector<int>&nums)
    {
        if(ind==-1)
        {
            ans += temp;
            return;
        }
        doSomething(ind-1,ans,temp,nums);
        temp = temp ^ nums[ind];
        doSomething(ind-1,ans,temp,nums);

    }
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        doSomething(n-1,ans,0,nums);
        return ans;
    }
};