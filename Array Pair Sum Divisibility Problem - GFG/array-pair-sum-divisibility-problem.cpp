// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size(); vector<int> vec; unordered_map<int,int> mp;
        if(n%2!=0) return false;
        
        for(int i=0;i<n;i++) vec.push_back(nums[i]%k);
        for(int i=0;i<n;i++) mp[vec[i]]++;
        
        for(int i=0;i<n;i++){
            if(vec[i]==0) {
                if(mp[vec[i]]%2!=0) return false;
            }
            else if(2*vec[i]==k) {
                if(mp[vec[i]]%2!=0) return false;
            }
            else{
                if(mp[vec[i]]!=mp[k-vec[i]]) return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends