class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int j=0;
        string temp;
        while(j<s.size())
        {
            if(s[j]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans+=temp+' ';
                temp ="";
            }
            else
            {   
                temp.push_back(s[j]);
            }
            j++;
        }
        if(temp.size()>0)
        {
            reverse(temp.begin(),temp.end());
            ans+=temp;
        }
        return ans;
    }
};
