class Solution {
public:
    // int bfs(int row,int col,vector<vector<int>>& mat){
    //     vector<vector<bool>>visited(mat.size(),vector<bool>(mat[0].size(),false));
    //     queue<pair<int,int>>q;
    //     int distance = 0;
    //     int m = mat.size(); int n = mat[0].size();
    //     q.push({row,col});
    //     visited[row][col] = true;
    //     int dr[] = {0,-1,0,1};
    //     int dc[] = {-1,0,1,0};
    //     while(!q.empty()){
    //         int size = q.size();
    //         for(int i=0;i<size;i++){
    //             auto f = q.front();
    //             q.pop();
    //             if(mat[f.first][f.second] == 0){
    //                 return distance;
    //             }
    //             for(int i=0;i<4;i++){
    //                 int r = f.first+dr[i];
    //                 int c = f.second+dc[i];
    //                 if(r>=0 && r<m && c>=0 && c<n && !visited[r][c]){
    //                     q.push({r,c});
    //                     visited[r][c] = true;
    //                 }
    //             }
    //         }
    //         distance++;
    //     }
    //     return distance;
    // }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>result(m,vector<int>(n,0));
         vector<vector<bool>>visited(mat.size(),vector<bool>(mat[0].size(),false));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                    visited[i][j] = true;
                }
            }
        }
        int distance = 0;
          int dr[] = {0,-1,0,1};
        int dc[] = {-1,0,1,0};
        while(!q.empty()){
            int size = q.size();
             for(int i=0;i<size;i++){
                auto f = q.front();
                q.pop();
                if(mat[f.first][f.second] == 1)result[f.first][f.second] = distance;
                for(int i=0;i<4;i++){
                    int r = f.first+dr[i];
                    int c = f.second+dc[i];
                    if(r>=0 && r<m && c>=0 && c<n && !visited[r][c]){
                        q.push({r,c});
                        visited[r][c] = true;
                    }
                }
            }
            distance++;
        }
        return result;
    }
};