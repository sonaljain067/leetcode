// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[501][501];
    bool isPalindrome(string &str,int i,int j){
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++; j--;
        }
        return true;
    }
    int MCM(string &str,int i,int j){
        if(i>=j) return dp[i][j]=0;
        if(isPalindrome(str,i,j)==true) return 0;
        if(dp[i][j]!=-1) return dp[i][j]; 
        int ans=INT_MAX;
        
        for(int k=i;k<=j-1;k++)
            ans=min(ans,MCM(str,i,k)+1+MCM(str,k+1,j));
        return dp[i][j]=ans;
    }
    int palindromicPartition(string str){
        int n=str.length(); memset(dp,-1,sizeof(dp));
        return MCM(str,0,n-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends