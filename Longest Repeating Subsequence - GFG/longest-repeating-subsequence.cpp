// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	int LCS(string& s1, string &s2){
	    int n=s1.size(), m=s2.size();
	    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<m+1;j++){
	            if(i==0 || j==0) dp[i][j]=0;
	            else if(s1[i-1]==s2[j-1] && i!=j)
	                dp[i][j]=1+dp[i-1][j-1];
	           else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }

    return dp[n][m];
	}
	int LongestRepeatingSubsequence(string str){
	    return LCS(str,str);
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends