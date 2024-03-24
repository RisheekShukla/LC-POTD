class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unordered_map<int,int>mpp;
        for(auto it:nums)
        {
            mpp[it]++;
        }
        mpp[val]=0;
        int ans=0;
        vector<int>nss;
        for(auto it:mpp)
        {
            ans += it.second;
        }
        for(auto it:nums)
        {
            if(it!=val)
            {
                nss.push_back(it);
            }
        }
        nums = nss;
        return ans;
    }
};