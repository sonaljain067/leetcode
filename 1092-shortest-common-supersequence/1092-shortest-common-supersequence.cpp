class Solution {
public:
    vector<vector<int>> LCS(string &a, string &b, int n,int m){
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
            }
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size(), m=str2.size();int i=n,j=m;string ans="";   
        vector<vector<int>> dp=LCS(str1,str2,n,m);   
        
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){ ans+=str1[i-1]; i--; j--;}
            else if(dp[i-1][j]>dp[i][j-1]) { ans+=str1[i-1]; i--;}
            else { ans+=str2[j-1]; j--;} 
        }
        while(i>0){ 
            ans+=str1[i-1]; i--;
        }
        while(j>0){
            ans+=str2[j-1]; j--;
        }  
        reverse(ans.begin(),ans.end());
        return ans;
    }
};