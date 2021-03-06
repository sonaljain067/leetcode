// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

int LCS(string &s1, string &s2){
    int n=s1.size(), m=s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1,0));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int minDeletions(string str, int n) { 
    string s2;
    for(auto ele: str) s2=ele+s2;

    return n-LCS(str,s2);
} 