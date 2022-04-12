// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        //Way1: DP code is taking more time for larger I/P so using two pointer method
        // int n=A.size(), m=B.size();
        // vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        // for(int i=0;i<n+1;i++){
        //     for(int j=0;j<m+1;j++){
        //         if(i==0 || j==0) dp[i][j]=0;
        //         else if(A[i-1]==B[j-1]) dp[i][j]=1+dp[i-1][j-1];
        //         else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        //     }
        // }
        // return (dp[n][m]==n) ? true : false;
        
        //Way2: Two pointer
        int n=A.size(), m=B.size(),j=0;
        for(int i=0; i<m && j<n; i++){
            if(A[j]==B[i]) j++;
        }
        return (j==n);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends