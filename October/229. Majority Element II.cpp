class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>st;
        vector<int>ans;
        int div = floor(nums.size()/3)+1;
        for(auto it:nums)
        {
            st[it]++;
            if(st[it]==div)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }
};
