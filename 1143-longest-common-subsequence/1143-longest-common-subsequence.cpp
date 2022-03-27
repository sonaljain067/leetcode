class Solution {
public:
    // Ways to solve: Recursion(in which time exceedes for 14 letter string), Memoization(in which time exceedes for 28 letter string), Tabulation(works very well even with very large strings)
    
    // int LCSRecursion(string t1,string t2,int n,int m){
    //     if(n==0 || m==0) 
    //         return 0;
    //     if(t1[n-1]==t2[m-1])
    //         return 1+LCSRecursion(t1,t2,n-1,m-1);
    //     else return max(LCSRecursion(t1,t2,n-1,m),LCSRecursion(t1,t2,n,m-1));
    // }
    
//     int LCSMemoization(string t1,string t2,int n,int m){
//         vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//         if(n==0 || m==0) 
//             return 0;
//         if(dp[n][m]!=-1) 
//             return dp[n][m];
//         if(t1[n-1]==t2[m-1])
//             return dp[n][m]=1+LCSMemoization(t1,t2,n-1,m-1);
//         else return dp[n][m]=max(LCSMemoization(t1,t2,n-1,m),LCSMemoization(t1,t2,n,m-1));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++)
//                 cout<<dp[i][j]<<" ";
//             cout<<"\n";
//         }
//     }
    
    int LCSTabulation(string t1,string t2,int n,int m){
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++) dp[i][0]=0;
        for(int j=0;j<=m;j++) dp[0][j]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t1[i-1]==t2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else 
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    int longestCommonSubsequence(string t1, string t2) {
        int n=t1.size(), m=t2.size();
        // return LCSRecursion(t1,t2,n,m);
        // return LCSMemoization(t1,t2,n,m);
        return LCSTabulation(t1,t2,n,m);
        
    }
};