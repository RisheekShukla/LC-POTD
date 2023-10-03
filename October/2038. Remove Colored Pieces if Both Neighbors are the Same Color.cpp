class Solution {
public:
    bool winnerOfGame(string colors) {
        int cntA=0;
        int cntB=0;
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A')
            {
                cntA++;
            }
        }
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i]=='B'&&colors[i-1]=='B' && colors[i+1]=='B')
            {
                cntB++;
            }
        }
        if(cntA==0)
        {
            return false;
        }
        if(cntA<=cntB)
        {
            return false;
        }
        return true;
    }
};
