class Solution {
public:
    int strStr(string haystack, string needle) {
        int s = needle.size();
        if(s>haystack.size())
        {
            return -1;
        }
        for(int i=0;i<=haystack.size()-s;i++)
        {
            if(haystack.substr(i,s)==needle)
            {
                return i;
            }
        }
        return -1;
    }
};