class Solution {
public:
    bool flag = false;
    void dfs(vector<vector<char>>& board,int row,int col,string word,string&curr,vector<vector<bool>>&visited){
        int rows = board.size();
        int cols = board[0].size();
        if(row < 0 || row >= rows || col < 0 || col >= cols || visited[row][col]) return;
        curr+=board[row][col];
        visited[row][col] = true;
         if(curr.size() == word.size()){
            if(curr == word){
                flag=true;
            }
            curr.pop_back();
            visited[row][col]=false;
            return; 
        }
        dfs(board,row+1,col,word,curr,visited);
        dfs(board,row-1,col,word,curr,visited);
        dfs(board,row,col+1,word,curr,visited);
        dfs(board,row,col-1,word,curr,visited);
        curr.pop_back();
        visited[row][col]=false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                string a = "";
                vector<vector<bool>>visited(rows,vector<bool>(cols,false));
                dfs(board,i,j,word,a,visited);
                if(flag == true) break;
            }
            if(flag == true) break;
        }
        return flag;
    }
};