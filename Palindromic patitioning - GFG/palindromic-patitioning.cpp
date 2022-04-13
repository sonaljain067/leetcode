// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPalindrome(string &str,int i,int j){
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++; j--;
        }
        return true;
    }
    int MCM(string &str,int i,int j,vector<vector<int>>&dp){
        if(i>=j) return dp[i][j]=0;
        if(isPalindrome(str,i,j)==true) return 0;
        if(dp[i][j]!=-1) return dp[i][j]; 
        int ans=INT_MAX;
        
        for(int k=i;k<=j-1;k++){
            int temp=MCM(str,i,k,dp)+1+MCM(str,k+1,j,dp);
            if(temp<ans)
                ans=temp;
        }
        return dp[i][j]=ans;
    }
    int palindromicPartition(string str){
        int n=str.length(); 
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return MCM(str,0,n-1,dp);
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