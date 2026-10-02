class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<vector<int>>dp(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
             n = triangle[i].size();
            for(int j=0;j<n;j++){
                if(i == 0 && j == 0) dp[i][j] = triangle[i][j];
                else{
                    if(j == 0){
                        dp[i][j] = dp[i-1][j];
                    }
                    else if(j == n-1){
                        dp[i][j] = dp[i-1][j-1];
                    }
                    else{
                        dp[i][j] = min(dp[i-1][j],dp[i-1][j-1]);
                    }
                    dp[i][j]+=triangle[i][j];
                }
            }
        }
        int ans = INT_MAX;
         n = triangle[m-1].size();
        for(int i=0;i<n;i++){
            ans = min(ans,dp[m-1][i]);
        }
        return ans;
    }
};