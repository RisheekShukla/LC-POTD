class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>Larr(26,0);
        vector<int>Uarr(26,0);
        for(char ch:word)
        {
            if(islower(ch))
            {
                Larr[ch-97]=1;
            }
            if(isupper(ch))
            {
                Uarr[ch-65] =1;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if(Larr[i]==1&&Uarr[i]==1)
            {
                cnt++;
            }
        }
        return cnt;
    }
};