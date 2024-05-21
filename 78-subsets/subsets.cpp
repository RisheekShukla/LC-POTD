class Solution {
    void method(vector<int>nums,vector<vector<int>> &ans,vector<int> temp,int index)
    {
        if(index >= nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        
        method(nums,ans,temp,index+1);
        
        int element = nums[index];
        temp.push_back(element);
        method(nums,ans,temp,index+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index = 0;
        method(nums,ans,temp,index);
        return ans;
        
    }
};