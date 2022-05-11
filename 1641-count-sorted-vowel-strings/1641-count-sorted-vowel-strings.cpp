class Solution {
public:
    int countVowelStrings(int n) {
        //Way1: Using 5 variable
        int a=1,e=1,i=1,o=1,u=1;
        while(--n){
            o+=u; i+=o; e+=i; a+=e; 
        }
        return a+e+i+o+u;
        
        //Way2: DP
        // vector<int> dp(5,1); int ans=0;
        // for(int i=3;i>=0;i--){
        //      dp[i]=dp[i]+dp[i+1];
        // }
        // for(auto x: dp){
        //      ans=ans+x; 
        // }
        // return ans;
    }
};