// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n){
        // Way1: Brute Force TC: O(n^2) SC: O(1)
        // int plate=1, res=1,i=1,j=0;
        // for(int i=0;i<n;i++){
        //     plate=1;
        //     for(int j=i+1;j<n;j++){
        //         if(max(arr[i],arr[j])<=min(dep[i],dep[j])) 
        //             plate++;
        //     }
        //     res=max(res,plate);  
        // }
        // return res;
        
        // Way2: Priority queue TC: O(nlogn), SC: O(n)
        vector<pair<int,int>> arr2(n); int count=1;
        for(int i=0;i<n;i++) arr2[i]={arr[i],dep[i]};
        sort(arr2.begin(),arr2.end());
        
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(arr2[0].second);
        
        for(int i=1;i<n;i++){
            if(arr2[i].first <= pq.top()) count++;
            else pq.pop();
            pq.push(arr2[i].second);
        }
        return count;
        
        
        // Way3: Merge Sort TC: O(nlogn), SC: O(1)
        
        
        
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends