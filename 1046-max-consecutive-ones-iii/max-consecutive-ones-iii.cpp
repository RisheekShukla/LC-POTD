class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i=0;
        int n = nums.size();
        int mx = 0;
        int cnt=0;
        int j=0;
       while(i<n){
        if(nums[i]==0)
        {
            cnt++;
        }
        // mx = max(mx,i-j);
        if(cnt>k)
        {
            while(cnt>k)
            {
                if(nums[j]==0)
                {
                    cnt--;
                }
                j++;
            }
        }
                    mx = max(mx,i-j+1);

        i++;
       }
       return mx;
    }
};