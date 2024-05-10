class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        int n = arr.size();
        map<double,vector<int>>mpp;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double val = double(arr[i])/double(arr[j]);
                mpp[val] = {arr[i],arr[j]};
            }
        }
        int cnt=1;
        for(auto it:mpp)
        {
            if(cnt==k)
            {
                return it.second;
            }
            cnt++;
        }
        return {};
    }
};