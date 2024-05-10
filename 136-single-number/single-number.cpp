class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xors=0;
        for(auto it:nums)
        {
            xors = xors^it;
        }
        return xors;
    }
};