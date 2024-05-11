class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)return 1;
         bool sign = false;
         if(dividend>=0 && divisor<0)
         {
            sign = true;
         }
         else if(dividend<=0 && divisor>0)
         {
            sign = true;
         }
         long ans=0;
         long divi = abs(dividend);
         long div = abs(divisor);
         while(divi>=div)
         {
            int cnt=0;
            while(divi>=(div<<(cnt+1)))
            {
                cnt++;
            }
            ans = ans + (1<<cnt);
            divi = divi - (div<<cnt);
            
         }
         if(ans==(1<<31)&&sign==false)
         {
            return INT_MAX;
         }
         if(ans==(1<<31)&&sign==true)
         {
            return INT_MIN;
         }
         if(sign)
         {
            return -1*ans;
         }
         return ans;
    }
};