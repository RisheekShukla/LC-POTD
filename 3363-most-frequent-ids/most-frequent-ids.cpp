class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) 
    {
        unordered_map<int,long long>mpp;
        multiset<pair<long long,int>>st;
        int n = freq.size();
        vector<long long>ans;
        for(int i=0;i<n;i++)
        {
            if(st.find(make_pair(mpp[nums[i]],nums[i]))!= st.end())
            {
                st.erase(st.find({mpp[nums[i]],nums[i]}));
            }
            mpp[nums[i]] += freq[i];
            if(mpp[nums[i]]!=0)
            {
                st.insert({mpp[nums[i]],nums[i]});
            }
            if(st.empty())
            {
                ans.push_back(0);
            }
            else
            {
                auto it = st.end();
                it--;
                ans.push_back((*it).first);
            }       
        }
        return ans;
    }
};