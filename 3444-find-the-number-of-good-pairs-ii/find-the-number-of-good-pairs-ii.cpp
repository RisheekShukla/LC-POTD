vector<int>seive[1000001];
int flag = 0;
void precompute()
{
    if(flag)
    {
        return;
    }
    flag = 1;
    // do the processing
    for(int i=1;i<1000001;i++)
    {
        for(int j=i;j<1000001;j=j+i)
        {
            seive[j].push_back(i);
        }
    }
}
     int ff[1000001];
class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        precompute();
        vector<int>shorted;
        long long ans=0;
   
        for(auto it:nums2)
        {
            ff[it]++;
        }
        for(auto it:nums1)
        {
            if(it%k==0)
            {
                for(auto pt:seive[it/k])
                {
                    ans += ff[pt];
                }
            }
        }
        for(auto it:nums2)
        {
            ff[it]--;
        }
        return ans;
    }
};