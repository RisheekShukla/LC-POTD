class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int arcInd=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[arcInd])
            {
                nums[arcInd+1]=nums[i];
                arcInd++;
            }
        }
        return arcInd+1;
    }
};