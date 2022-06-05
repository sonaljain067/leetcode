// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) { 
	    //Way1: Recursive
        // if(V==0) return 0;
        // int res=INT_MAX;
        // for(int i=0;i<M;i++){
        //     if(coins[i]<=V){
        //         int sub_res=minCoins(coins,M,V-coins[i]);
        //         if(sub_res!=INT_MAX && sub_res+1<res)
        //             res=sub_res+1;
        //     }
        // }
        // return res;
	    
	    // Way2: DP TC: O(n^2), SC: O(1)
        vector<int> dp(V+1,INT_MAX); dp[0]=0;
        for(int i=1;i<=V;i++)
            for(int j=0;j<M;j++)
                if(coins[j]<=i){
                    int sub_res=dp[i-coins[j]];
                    if(sub_res!=INT_MAX && sub_res+1<dp[i])
                        dp[i]=sub_res+1;
                }

        if(dp[V]==INT_MAX) return -1;
        return dp[V];
	} 
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends