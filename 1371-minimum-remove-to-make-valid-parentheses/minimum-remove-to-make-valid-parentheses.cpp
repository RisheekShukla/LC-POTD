class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<pair<char,int>>st;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(!st.empty()&&s[i]==')'&&st.top().first=='(')
            {
                st.pop();
            }
            else if(s[i]==')'||s[i]=='(')
            {
                st.push({s[i],i});
            }
        }
        unordered_set<int>sss;
        while(!st.empty())
        {
            auto it = st.top();
            sss.insert(it.second);
            st.pop();
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            if(sss.find(i)==sss.end())
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};