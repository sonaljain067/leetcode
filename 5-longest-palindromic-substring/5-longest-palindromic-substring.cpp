class Solution {
public:
//     bool isPalindrome(string s){
//         int i=0,j=s.size()-1;
//         while(i<j){
//             if(s[i++]!=s[j--]) return false;
            
//         }
//         return true;
//     }
    string longestPalindrome(string s) {
        // Way1: Brute Force -> LTE
//         int n=s.size(); string result="";
//         if(n==0) return "";
//         if(n==1) return s;
        
//         for(int i=0;i<n-1;i++){
//             for(int j=1;j<=n-i;j++){
//                 if(isPalindrome(s.substr(i,j)))
//                     if(result.size()<j) result=s.substr(i,j);
//             }
//         }
//         return result;
        
        // Way2: Using DP TC: O(n^2), SC: O(n^2)
        int n=s.size(); 
        if(n==0) return "";
        vector<vector<bool>> dp(n, vector<bool>(n,0));
        string ans=""; ans+=s[0];
        
        for(int i=0;i<n;i++) dp[i][i]=true;
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i==1 || dp[i+1][j-1]) {
                        dp[i][j]=true;
                        if(ans.size()<j-i+1) ans=s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};













