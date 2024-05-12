class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int orr = a|b;
        int cnt=0;
        int iter=0;
        while(true)
        {
            int val1 = orr&1; 
            int val2 = c&1;
            if((val1==0) && (val2==1))
            {
                cnt++;
            }
            else if((val1==1) && (val2==0))
            {
                if(a&(1<<iter))
                {
                    cnt++;
                }
                if((b&(1<<iter)))
                {
                    cnt++;
                }
            }
            orr = orr>>1;
            c = c>>1;
            iter++;
            if(orr==0&&c==0)
            {
                break;
            }
        }
        return cnt;
    }
};