class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> arr = score;
        int n = score.size();
        sort(arr.begin(),arr.end(),greater<int>());
        vector<string>ans;
        map<int,int,greater<int>>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]] = i+1;
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(to_string(mpp[score[i]]));
            if(ans[i]=="1")
            {
                ans[i]="Gold Medal";
            }
            else if(ans[i]=="2")
            {
                ans[i]="Silver Medal";
            }
            else if(ans[i]=="3")
            {
                ans[i]="Bronze Medal";
            }
        }
        return ans;
    }
};