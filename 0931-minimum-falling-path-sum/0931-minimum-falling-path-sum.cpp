class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[0][i] = matrix[0][i];
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                 int c = INT_MAX;
                if(j == 0){
                   c = min(dp[i-1][j],dp[i-1][j+1]);
                }
                else if(j == n-1){
                    c = min(dp[i-1][j],dp[i-1][j-1]);
                }
                else{
                    c = min(dp[i-1][j],min(dp[i-1][j-1],dp[i-1][j+1]));
                }
                dp[i][j] = c + matrix[i][j];
            }
        }

        //then choose min value from the last row
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            ans = min(ans,dp[n-1][i]);
        }
        return ans;
    }
};