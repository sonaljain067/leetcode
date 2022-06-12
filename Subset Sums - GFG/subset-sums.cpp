// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    // Way1: Recursive  TC: O(2^n), SC: O(n)
    // void findSumR(vector<int> &ans, vector<int>arr, int i, int sum, int n){
    //     if(i==n){
    //         ans.push_back(sum); return;
    //     }
    //     findSum(ans,arr,i+1,sum,n);
    //     findSum(ans,arr,i+1,sum+arr[i],n);
    // }
    vector<int> subsetSums(vector<int> arr, int N){
        // Way1: Recursive  TC: O(2^n), SC: O(n)
        // vector<int> ans;
        // findSumR(ans,arr,0,0,N);
        // return ans;
        
        // Way2: Iterative TC: O(n*2^n), SC: O(1)
        int n=arr.size(); long long total=1<<n; 
        vector<int>ans; long long sum;
        for(long long i=0;i<total;i++){
            sum=0;
            for(int j=0;j<n;j++)
                if(i & (1<<j)) sum+=arr[j];
            ans.push_back(sum);
        }
        return ans;   
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends