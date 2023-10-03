class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>maplist;
        for(auto it:nums)
        {
            maplist[it]++;
        }
        int ans=0;
        for(auto it:maplist)
        {
            int num = it.second;
            ans += (num*(num-1))/2;
        }
        return ans;
    }
};
