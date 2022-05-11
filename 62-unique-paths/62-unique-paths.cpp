class Solution {
public:
    //Way1: Recursive
    // int findUniquePaths(int m,int n){
    //     if(m<0 || n<0) return 0;
    //     if(m==0 || n==0) return 1;
    //     return findUniquePaths(m-1,n)+findUniquePaths(m,n-1);
    // }
    
    //Way2: Rat-maze method(Recursive)
//     void findPaths(int sr,int sc,int er,int ec,int &count){
//         if(sr==er && ec==sc){
//             count++; return;
//         }
        
//         if(sr+1<=er) findPaths(sr+1,sc,er,ec,count);
//         if(sc+1<=ec) findPaths(sr,sc+1,er,ec,count);
//     }
    
    //Way3: Memoization
    // int findUniquePaths(int m,int n,vector<vector<int>>& dp){
    //     if(m<0 || n<0) return dp[m][n]=0;
    //     if(m==0 || n==0) return dp[m][n]=1;
    //     else if(dp[m][n]>0) return dp[m][n];
    //     return dp[m][n]=findUniquePaths(m-1,n,dp)+findUniquePaths(m,n-1,dp);
    // }
    
    // Way4: Tabulation
//     int findUniquePaths(int m,int n){
//         vector<vector<int>> dp(m,vector<int>(n));
//         dp[0][0]=1;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0)  dp[0][j]=1;
//                 if(j==0) dp[i][0]=1;
//                 if(i!=0 && j!=0)
//                     dp[i][j]=dp[i-1][j]+dp[i][j-1];
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         return dp[m-1][n-1];
        
//     }
    
    int uniquePaths(int m, int n) {
        //Way1: Recursive
        // return findUniquePaths(m-1,n-1);
        
        //Way2: Rat-maze method(Recursive)
        // int result=0;
        // findPaths(0,0,m-1,n-1,result);
        // return result;
        
        //Way3: Memoization
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return findUniquePaths(m-1,n-1);
        
        //Way4: Tabulation
        // return findUniquePaths(m,n);
        
        //Way5: Math (using combination formula C)
        long res=1; int j=1;
        if(m==1 || n==1) return 1;
        m--; n--;
        if(m<n){
            m=m+n; n=m-n; m=m-n;
        }
        for(int i=m+1;i<=m+n;i++,j++){
            res=res*i; res=res/j;
        }
        return (int)res;
    }
    
    
    
};