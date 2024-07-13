class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(auto it:nums)
        {
            xorr = xorr^it;
        }
        return xorr;
    }
};