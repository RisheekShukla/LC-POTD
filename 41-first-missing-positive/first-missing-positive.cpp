class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto it:nums)
        {
            if(it>=0)
            {
                st.insert(it);
            }
        }
        int a =1;
        while(st.find(a)!=st.end())
        {
            a++;
        }
        return a;
    }
};