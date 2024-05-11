class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) 
    {
        int n = quality.size();
        vector<pair<double,int>>vec;
        for(int i=0;i<n;i++)
        {
            double val = (double)wage[i]/quality[i];
            vec.push_back({val,quality[i]});
        }
        sort(vec.begin(),vec.end());
        priority_queue<int>pq;
        int total=0;
        double mini = 1e9;
        for(auto it:vec)
        {
            total += it.second;
            pq.push(it.second);
            if(pq.size()==k)
            {
                mini = min(mini,it.first*total);
                total -= pq.top();
                pq.pop();
            }
        }
        return mini;
    }
};