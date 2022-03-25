// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int perfectSum(int nums[], int n, int target){
         vector<vector<int>> dp(n+1,vector<int>(target+1,0));
        long long m=1e9+7;
        for(int i=0;i<n+1;i++) dp[i][0]=1; 
        for(int j=1;j<target+1;j++) dp[0][j]=0;
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<target+1;j++){
                if(nums[i-1]<=j)
                    dp[i][j]=((dp[i-1][j]%m)+(dp[i-1][j-nums[i-1]]%m))%m;
                else 
                    dp[i][j]=dp[i-1][j]%m;
            }
        }
        
        return dp[n][target];
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends