class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        queue<pair<int,int>>q;
        int fresh = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                    visited[i][j] = true;
                }
                else if(grid[i][j] == 1) fresh++;
            }
        }
        int dr[] = {0,-1,0,1};
        int dc[] = {-1,0,1,0};
        int minutes = 0;
        while(!q.empty() && fresh>0){
            int size = q.size();
            for(int i=0;i<size;i++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int r = row+dr[i],c = col+dc[i];
                    if(r >=0 && r<m && c>=0 && c<n && !visited[r][c] && grid[r][c] == 1){
                        grid[r][c] = 2;
                        fresh--;
                        q.push({r,c});
                        visited[r][c] = true;
                    }
                }
            }
            minutes++;
        }
        if(fresh > 0) return -1;
        return minutes;
    }
};