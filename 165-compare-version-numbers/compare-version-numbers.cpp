class Solution {
    pair<int,int>kuchkrr(string str,int &ind)
    {
        int val=0;
        while(ind<str.size())
        {
            if(str[ind]=='.')
            {
                break;
            }
            val = val*10+(str[ind]-'0');
            ind++;
        }
        ind++;
        return {val,ind};
    }
public:
    int compareVersion(string version1, string version2) 
    {
        int n1 = version1.size();
        int n2 = version2.size();
        int i=0;int j=0;
        while(i<n1||j<n2)
        {
            pair<int,int>p11 = kuchkrr(version1,i);
            pair<int,int>p22 = kuchkrr(version2,j);
            if(p11.first>p22.first)
            {
                return 1;
            }
            else if(p11.first<p22.first)
            {
                return -1;
            }
        }
        return 0;
    }
};