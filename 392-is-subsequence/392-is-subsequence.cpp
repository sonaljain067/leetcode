class Solution {
public:
    bool isSubsequence(string s, string t) {
        //Way1: Using string
        // int n=s.length(), m=t.length(), j=0;
        // for(int i=0;i<m && j<n;i++)
        //     if(s[j]==t[i]) j++;
        // return (j==n);
        
        //Way2: Using DP
        int n=s.size(), m=t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
                else if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return (dp[n][m]==n) ? true : false;
    }
};
