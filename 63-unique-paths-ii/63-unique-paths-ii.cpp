class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row=obstacleGrid.size(), col=obstacleGrid[0].size();
        vector<vector<int>> dp(row+1,vector<int>(col+1,0));
        dp[0][1]=1;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                if(!obstacleGrid[i-1][j-1])
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[row][col];
    }
};