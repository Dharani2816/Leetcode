class Solution {
public:
    void dfs(int row,int col,vector<vector<char>>& board,vector<vector<bool>>&notConverted){
        if(row < 0 ||  col < 0 ||  row >= board.size() || col >= board[0].size() || 
        board[row][col] == 'X' || notConverted[row][col]){
            return;
        }
        notConverted[row][col] = true;
        dfs(row+1,col,board,notConverted);
        dfs(row-1,col,board,notConverted);
        dfs(row,col+1,board,notConverted);
        dfs(row,col-1,board,notConverted);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>>notConverted(m,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            dfs(0,i,board,notConverted);
        }

        for(int i=0;i<n;i++){
            dfs(m-1,i,board,notConverted);
        }

        for(int i=0;i<m;i++){
            dfs(i,0,board,notConverted);
        }

        for(int i=0;i<m;i++){
            dfs(i,n-1,board,notConverted);
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O' && !notConverted[i][j]){
                    board[i][j] = 'X';
                }
            }
        }
    }
};