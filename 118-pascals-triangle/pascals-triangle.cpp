class Solution {
    vector<int>levelit(int l)
    {
        vector<int>temp(l);
        long long ans=1;
        temp[0]=1;
        for(int c=1;c<l-1;c++)
        {
            ans = ans * (l-c);
            ans = ans / c;
            temp[c]=ans;
        }
        temp[l-1]=1;
        return temp;
    }
public:
    vector<vector<int>> generate(int rl) {
        vector<vector<int>>finalans;
        for(int r=1;r<=rl;r++)
        {
            finalans.push_back(levelit(r));
        }
    return finalans;
    }
};