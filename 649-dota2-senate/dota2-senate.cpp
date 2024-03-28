class Solution {
public:
    string predictPartyVictory(string senate) 
    {
        queue<int>qrr1,qrr2;
        int n = senate.size();
        for(int i=0;i<n;i++)
        {
            if(senate[i]=='D')
            {
                qrr1.push(i);
            }
            else
            {
                qrr2.push(i);
            }
        }
        while(!qrr1.empty() && !qrr2.empty())
        {
            int indD = qrr1.front();
            int indR = qrr2.front();
            qrr1.pop();
            qrr2.pop();
            if(indD<indR)
            {
                qrr1.push(indD+n);
            }
            else
            {
                qrr2.push(indR+n);
            }
        }
        if(!qrr1.empty())
        {
            return "Dire";
        }
        return "Radiant";
    }
};