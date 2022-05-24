// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n){
        //Way: Hashmap  TC: O(nlogn), SC: O(n)
        //Way: Vector
        vector<pair<int,int>> vec; int k=0,count=1;
        for(int i=0;i<n;i++) vec.push_back({end[i],start[i]});
        sort(vec.begin(),vec.end());
        
        for(int i=0;i<n;i++){
            if(vec[k].first < vec[i].second) k=i,count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends