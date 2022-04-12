class Solution {
public:
    int longestPalindromeSubseq(string s) {
//     // In this passing two string first the original one and second the reversed one and then passing it through Longest Common Subsequences to get no of Longest Palindromic Subsequence 
        string s2;
        for(auto ele: s) s2=ele+s2;
        
        int n=s.size(), m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
                else if(s[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};