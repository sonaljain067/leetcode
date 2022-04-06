// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n){
        map<string,int> mp; string ans;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        int mx=INT_MIN, mx2=INT_MIN;
        for(auto i: mp){
            mx=max(mx,i.second);
        }
        for(auto i: mp){
            if(i.second>mx2 && i.second<mx){
                mx2=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends