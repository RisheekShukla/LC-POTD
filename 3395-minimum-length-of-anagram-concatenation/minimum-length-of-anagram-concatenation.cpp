class Solution {
    bool checkthis(string s,int length)
    {
        vector<int>map1(26,0);
        for(int i=0;i<length;i++)
        {
            map1[s[i]-'a']++;
        }
        for(int i=length;i<s.size();i+=length)
        {
            vector<int>map2(26,0);
            for(int j=0;j<length;j++)
            {
                map2[s[i+j]-'a']++;
            }
            if(map1!=map2)
            {
                return false;
            }
        }
        return true;
    }
public:
    int minAnagramLength(string s) {
        int n = s.size();
        for(int i=1;i<=n;i++)
        {
            if(n%i==0 && checkthis(s,i))
            {
                return i;
            }
        }
        return 0;
    }
};
