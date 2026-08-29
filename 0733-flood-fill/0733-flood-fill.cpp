class Solution {
public:
    void DFS(int row,int col,vector<vector<int>>&image,vector<vector<bool>>&visited,int original,int color){
        if(row >= 0 && row <image.size() && col >= 0 && col < image[0].size() && !visited[row][col] && image[row][col] == original){
            image[row][col] = color;
            visited[row][col] = true;
            int dr[] = {0,-1,0,1};
            int dc[] = {-1,0,1,0};
            for(int i=0;i<4;i++){
                DFS(row+dr[i],col+dc[i],image,visited,original,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int originalColor = image[sr][sc];
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        DFS(sr,sc,image,visited,originalColor,color);
        return image;
    }   
};