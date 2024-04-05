class Solution {
    void stringExtract(stack<int>st,string &ans)
    {
        if(st.size()==0)
        {
            return;
        }
        char ch = st.top();
        st.pop();
        stringExtract(st,ans);
        ans.push_back(ch);
    }
public:
    string makeGood(string s) 
    {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(!st.empty() && (ch == st.top()-32 || ch==st.top()+32))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }   
        string ans;
        stringExtract(st,ans);
        return ans;
    }
};