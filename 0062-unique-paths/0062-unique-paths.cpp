class Solution {
public:
    // int result = 0;
    // int paths(int row,int col,int m,int n,vector<vector<int>>&dp){
    //     if(row < 0 || col < 0 || row >= m || col >= n) return;
    //     if(row == m-1 && col == n-1) result++;
    //     if(dp[row][col] != -1) return dp[row][col];
    //     int c1 = paths(row,col+1,m,n);
    //     int c2 = paths(row+1,col,m,n);
    //     dp[row][col] = c1 + c2;
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0] = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i > 0 && j > 0){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
                else{
                    if(i <= 0 && j > 0){
                        dp[i][j] = dp[i][j-1];
                    }
                    else if(j<= 0 && i > 0){
                        dp[i][j] = dp[i-1][j];
                    }
                } 
            }
        }
        return dp[m-1][n-1];
    }
};