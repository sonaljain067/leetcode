// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    unordered_map<int,int> mp;
    int eggDrop(int n, int k)         if(k==0 || k==1 || n==1) return k; 
        int floor=k, ans=INT_MAX;
        if(mp.find(floor)!=mp.end()) return mp[floor];
        for(int i=1;i<=k;i++)
            ans=min(ans,1+max(eggDrop(n-1,i-1),eggDrop(n,k-i)));
        return mp[floor]=ans;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends