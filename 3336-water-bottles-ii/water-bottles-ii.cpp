class Solution {
public:
    int maxBottlesDrunk(int nb, int ne) 
    {
        int drink=0;
        int empty =0;
        while(nb>0)
        {
            drink += nb;
            empty += nb;
            nb=0;
            if(empty>=ne)
            {
                empty -= ne;
                nb = nb+1;
                ne++;
            }
            else
            {
                break;
            }
        }    
        return drink;
    }
};