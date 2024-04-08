class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        multiset<int>mss;
        for(auto it:students)
        {
            mss.insert(it);
        }    
        for(int i=0;i<sandwiches.size();i++)
        {
            if(mss.find(sandwiches[i])!=mss.end())
            {
                mss.erase(mss.find(sandwiches[i]));
            }
            else
            {   
                return mss.size();
            }
        }
        return 0;
    }
};