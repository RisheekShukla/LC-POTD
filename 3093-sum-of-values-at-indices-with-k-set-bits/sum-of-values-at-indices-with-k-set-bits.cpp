class Solution {
    int v;
    int countSetBits(int num)
    {
        int cnt=0;
        while(num>=1)
        {
            // if(num&(1<<i))
            // {
            //     cnt++;
            // }
            if(cnt>v)
            {
                return false;
            }
            cnt += num&1;
            num = num>>1;
        }
        return cnt==v;
    }
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        this->v = k;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(countSetBits(i))
            {
                ans = ans + nums[i];
            }
        }
        return ans;
    }
};