// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n){   
        //Brute Force TC: O(n^2), SC: O(1)
        // int maxLen=0; 
        // for(int i=0;i<n;i++){
        //     int currSum=0;
        //     for(int j=i;j<n;j++){
        //         currSum+=A[j];
        //         if(currSum==0) maxLen=max(maxLen,j-i+1);
        //     }
        // }
        // return maxLen;
        
        //Way:  Hashmap TC: O(n), SC: O(n)
        unordered_map<int,int> umap; int maxLen=0, preSum=0; umap[0]=-1;
        for(int i=0;i<n;i++) {
            preSum+=A[i];
            if(umap.find(preSum)!=umap.end()){
                int len=i-umap[preSum];
                if(maxLen<len) maxLen=len;
            }
            else umap[preSum]=i;
        }
        return maxLen;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends