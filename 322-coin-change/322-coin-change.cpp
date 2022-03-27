class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int t[n+1][amount+1];
        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= amount; ++j)
            {
                if(i==0) t[i][j] = 1e5;
                else if(j==0) t[i][j] = 0;
                else if (coins[i - 1] <= j)
                    t[i][j] = min(1+t[i][j - coins[i - 1]], t[i - 1][j]);
                else
                    t[i][j] = t[i - 1][j];
            }
        return t[n][amount]>1e4 ? -1 : t[n][amount];
    }
};