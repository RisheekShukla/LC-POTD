class Solution {
    char findstr(int n)
    {
        if(n==1)
        {
            return '1';
        }
        if(n==2)
        {
            return '2';
        }
        if(n==3)
        {
            return '3';
        }
        if(n==4)
        {
            return '4';
        }if(n==5)
        {
            return '5';
        }
        if(n==6)
        {
            return '6';
        }
        if(n==7)
        {
            return '7';
        }
        if(n==8)
        {
            return '8';
        }
        if(n==9)
        {
            return '9';
        }
        return '9';
    }
public:
    string compressedString(string word) 
    {
        int i=1;
        string ans;
        int cnt=1;
        while(i<=word.size())
        {
            if(word[i-1]!=word[i] || cnt>=9)
            {
                
                ans.push_back(findstr(cnt));
                ans.push_back(word[i-1]);
                cnt=1;
            }
            else 
            {
                cnt++;
            }
            i++;
        }
        return ans;
    }
};