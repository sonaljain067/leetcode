// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
        int mx=tree[0], wood=0;
        for(int i=1;i<n;i++){
            if(tree[i]>mx) mx=tree[i];
        }
        int low=0,high=mx;
        while(low<=high){
            int mid=low+(high-low)/2;
            for(int i=0;i<n;i++)
                if(tree[i]>=mid) wood+=(tree[i]-mid); 
            if(wood==k) return mid;
            else if(wood>k) low=mid+1;
            else high=mid-1;
            wood=0;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}  // } Driver Code Ends