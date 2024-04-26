class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<bool>arr(n);
        unordered_set<char>stl;
        for(int i=0;i<n;i++)
        {
            if(islower(word[i])&&arr[word[i]-97]==0)
            {
                stl.insert(word[i]);
            }
            else
            {
                arr[word[i]-65]=1;
            }
            if(islower(word[i])&&arr[word[i]-97]==1)
            {
                stl.erase(word[i]);
            }
        }
        int cnt=0;
        for(auto it:stl)
        {
            if(arr[it-97]==1)
            {
                cnt++;
            }
        }
        return cnt;
    }
};