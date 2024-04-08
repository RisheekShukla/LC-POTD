class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        multiset<int>mss;
        for(auto it:students)
        {
            mss.insert(it);
        }    
        int ans=0;
        for(int i=0;i<sandwiches.size();i++)
        {
            if(mss.find(sandwiches[i])!=mss.end())
            {
                mss.erase(mss.find(sandwiches[i]));
            }
            else
            {   
                ans = mss.size();
                break;
            }
        }
        return ans;
    }
};