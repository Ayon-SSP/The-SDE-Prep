class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int fresh = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
       
        
        int cnt=-1;
        int dir[4][2]={ {0,1}, {0,-1}, {1,0}, {-1,0} };
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(auto i:dir)
                {
                    int dx = x+i[0];
                    int dy = y+i[1];
                    if( dx>=0 && dx<n && dy>=0 && dy<m &&grid[dx][dy]==1)
                    {
                        grid[dx][dy]=2; 
                        q.push({dx,dy});
                        fresh--;
                    }
                }
            }
            
            cnt++;
        }
        
        if(fresh>0) return -1;
        if(cnt==-1) return 0;
       
        return cnt;
        
    }
};
