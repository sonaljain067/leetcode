// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
       int hash[26]={0}; string res=arr;
    
        for(auto i: arr)
            hash[i-'a']++;
        for(int i=1;i<26;i++)
            hash[i]+=hash[i-1];
            
        for(int i=0;i<arr.size();i++){
            res[hash[arr[i]-'a']-1]=arr[i];
            hash[arr[i]-'a']--;
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends