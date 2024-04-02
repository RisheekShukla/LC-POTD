class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,char>mpp1,mpp2;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(mpp1.find(s[i])!=mpp1.end() ) 
            {
                if(mpp1[s[i]]!=t[i])
                {
                    return false;
                }
            }
            else 
            {
                if(mpp2.find(t[i])!=mpp2.end())
                {
                    return false;
                }
            }
            mpp1[s[i]]=t[i];
            mpp2[t[i]]=s[i];
        }    
        return true;
    }
};
