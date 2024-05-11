class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start^goal;
        int cnt=0;
        while(num>0)
        {
            // if((num>>1)&1)
            // {
            //     cnt++;
            // }
            cnt = cnt+(num&1);
            num = num>>1;
        }
        return cnt;
    }
};