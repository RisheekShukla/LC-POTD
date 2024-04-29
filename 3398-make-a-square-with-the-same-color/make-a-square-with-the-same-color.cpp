class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) 
    {
        int mini = 4;
        int cntB=0;
        int cntW=0;
        // quad 1
        grid[0][0]=='W'?cntW++:cntB++;    
        grid[0][1]=='W'?cntW++:cntB++;  
        grid[1][0]=='W'?cntW++:cntB++; 
        grid[1][1]=='W'?cntW++:cntB++;   
        mini = min(mini,min(cntW,cntB));
        cntB=0;
        cntW=0;
        // quad 2
        grid[0][1]=='W'?cntW++:cntB++;    
        grid[0][2]=='W'?cntW++:cntB++;  
        grid[1][1]=='W'?cntW++:cntB++; 
        grid[1][2]=='W'?cntW++:cntB++;   
        mini = min(mini,min(cntW,cntB));
        cntB=0;
        cntW=0;
        // quad 3
        grid[1][0]=='W'?cntW++:cntB++;    
        grid[1][1]=='W'?cntW++:cntB++;  
        grid[2][0]=='W'?cntW++:cntB++; 
        grid[2][1]=='W'?cntW++:cntB++;   
        mini = min(mini,min(cntW,cntB));
        cntB=0;
        cntW=0;
        // quad 4
        grid[1][1]=='W'?cntW++:cntB++;    
        grid[1][2]=='W'?cntW++:cntB++;  
        grid[2][1]=='W'?cntW++:cntB++; 
        grid[2][2]=='W'?cntW++:cntB++;   
        mini = min(mini,min(cntW,cntB));
        if(mini<=1)
        {
            return true;
        }
        return false;
    }
};