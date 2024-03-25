class Solution {
    bool checkforit(int ind,vector<int>&cost,vector<int>&gas)
    {
        int n =cost.size();
        int flg = ind;
        int ourcost = gas[ind];
        while(true)
        {
           
            ourcost = ourcost - cost[ind];
            if(ourcost<0)
            {
                return false;
            }
            ind = (ind+1)%n;
            if(ind == flg)
            {
                return true;
            }
            ourcost = ourcost + gas[ind];
        }
        return true;
    }
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n = gas.size();
        if(n==1 && gas[0]>=cost[0])
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(cost[i]<gas[i] && checkforit(i,cost,gas))
            {
                return i;
            }
        }    
        return -1;
    }
};