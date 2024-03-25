class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int sptr = nums[0];
        int fptr = nums[0];
        do
        {
            sptr = nums[sptr];
            fptr = nums[nums[fptr]];
        } while(sptr!=fptr);
        // slow uski jagah pr h
        // start fast frpm start 
        // dono ko same speed se badhana hai 
        // to get point of collision
        fptr = nums[0];
        while(fptr!=sptr)
        {
            sptr = nums[sptr];
            fptr = nums[fptr];
        }
        return fptr;
    }
};