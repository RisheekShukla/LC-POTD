class RecentCounter {
    queue<int>qrr;
    int ans=0;
public:
    RecentCounter() {
        ans=0;
    }
    
    int ping(int t) {
        qrr.push(t);
        while(qrr.front()<t-3000)
        {
            qrr.pop();
        }
        ans = qrr.size();
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */