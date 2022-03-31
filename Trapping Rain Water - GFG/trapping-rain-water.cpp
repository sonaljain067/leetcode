// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // Way1:- TC: O(n^2), SC: O(1)
        // long long int ans=0;
        // for(int i=1;i<n-1;i++){
        //     int left=arr[i];
        //     for(int j=0;j<i;j++)
        //         left=max(left,arr[j]);
        //     int right=arr[i];
        //     for(int j=i+1;j<n;j++)
        //         right=max(right,arr[j]);
        //     ans=ans+(min(left,right)-arr[i]);
        // }
        // return ans;
        
        //Way2:- 
        int left[n],right[n]; long long water=0;
        left[0]=arr[0]; right[n-1]=arr[n-1];
        for(int i=1;i<n;i++) left[i]=max(left[i-1],arr[i]);
        for(int i=n-2;i>=0;i--) right[i]=max(right[i+1],arr[i]);
        
        for(int i=1;i<n-1;i++){
            int var=min(left[i-1],right[i+1]);
            if(var>arr[i]) water+=var-arr[i];
        }
        return water;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends