class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) 
    {
        long long ans=0;
        unordered_map<int,int>mpp;
        for(auto it:hours)
        {
            int need = (24-(it%24))%24;
            ans += mpp[need];
            mpp[it%24]++;
        }    
        return ans;
    }
};