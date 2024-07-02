class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int>st;
        vector<int>arr;
        for(auto it:nums1)
        {
            st.insert(it);
        }
        for(auto it:nums2)
        {
            if(st.find(it)!=st.end())
            {
                arr.push_back(it);
                st.erase(st.find(it));
            }
        }
        return arr;
    }
};