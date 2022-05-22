class Solution {
public:
    int countSubstrings(string s) {
        // Way: String O(n^2)*O(n), SC: O(1)
        // int n=s.length(), cnt=n;
        // for(int i=1,l=0,r=2;i<n;i++,l=i-1,r=i+1)
        //     while(l>=0 && r<n && s[l]==s[r]) l--,r++,cnt++;
        // for(int i=1,l=0,r=1;i<n;i++,l=i-1,r=i)
        //     while(l>=0 && r<n && s[l]==s[r]) l--,r++,cnt++;
        // return cnt;
        
        // Way: Dynamic Programming TC: O(n*n), SC: O(n*n)
        int n=s.size(),ans=0; vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i+1;j++){
                if(i==1) dp[j][j]=1;
                else if(i==2){
                    if(s[j]==s[j+1]) dp[j][j+1]=1; else dp[j][j+1]=0;
                }
                else if(s[j]==s[j+i-1] && dp[j+1][j+i-2]>0) dp[j][j+i-1]=1;
                else dp[j][j+i-1]=0; ans+=dp[j][j+i-1];
            }
        }
        return ans;
    }
};