class Solution {
public:
    void DFS(int row,int col,vector<vector<int>>& grid,int&area,vector<vector<bool>>&visited){
        int rows = grid.size();
        int cols = grid[0].size();
        int dr[] = {0,0,-1,1};
        int dc[] = {-1,1,0,0};

        if(row < 0 || row >= rows || col < 0 || col >= cols || grid[row][col] == 0 || visited[row][col] == true){
            return;
        }
        area++;
        visited[row][col] = true;
        for(int i=0;i<4;i++){
            DFS(row+dr[i],col+dc[i],grid,area,visited);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxArea = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int area = 0;
                vector<vector<bool>>visited(rows,vector<bool>(cols,false));
                DFS(i,j,grid,area,visited);
                maxArea = max(maxArea,area);
            }
        }
        return maxArea;
    }
};