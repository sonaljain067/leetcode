// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    unordered_map<int,int> mp;
    int solve(int e,int f){
        if(f==0 || f==1){
            return f;
        }
        if(e==1){
            return f;
        }
        int flr=f;
        if(mp.find(flr)!=mp.end()){
            return mp[flr];
        }
        int mn=INT_MAX;
        for(int k=1;k<=f;k++){
            int tempAns=1+max(solve(e-1,k-1),solve(e,f-k));
            mn=min(mn,tempAns);
        }
        mp[flr]=mn;
        return mp[flr];
    }
    int eggDrop(int n, int k) 
    {
        return solve(n,k);
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