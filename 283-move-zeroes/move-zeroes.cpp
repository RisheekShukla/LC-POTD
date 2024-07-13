class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // call the non zero numbers forward
        int p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[p]);
                p++;
            }
        }
    }
};