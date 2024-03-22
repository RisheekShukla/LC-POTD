class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) 
    {
        set<pair<int,int>>st;
        long long sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            st.insert({nums[i],i});
        }     
        vector<long long>vec;
        for(auto it:queries)
        {
            if(nums[it[0]]!=-1)
            {
                sum -= nums[it[0]];
                st.erase(make_pair(nums[it[0]],it[0]));
                nums[it[0]]=-1;
            }
            int ss = it[1];
            while(ss--&& !st.empty())
            {
                auto ict = st.begin();
                sum -= nums[ict->second];
                nums[ict->second]=-1;
                st.erase(ict);
            }
            vec.push_back(sum);
        }
        return vec;
    }
};