class Solution {
    void BharDeBhai(unordered_set<int>&st,vector<int>&arr)
    {
        for(auto it:arr)
        {
            while(it>0)
            {
                st.insert(it);
                it = it/10;
            }
        }
    }
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) 
    {
        int n = arr1.size();
        int m = arr2.size();
        int num=0;
        unordered_set<int>st;
        BharDeBhai(st,arr1);
        for(int i=0;i<m;i++)
        {
            while(arr2[i]>0)
            {
                if(st.find(arr2[i])!=st.end()&&arr2[i]>num)
                {
                    num = arr2[i];
                    break;
                }
                arr2[i] = arr2[i]/10;
            }
        }
        if(num==0)
        {
            return 0;
        }
        int ans=0;
        while(num>0)
        {
            num/=10;
            ans++;
        }
        return ans;
    }
};