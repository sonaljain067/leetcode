// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
int num[2];
    int *findTwoElement(int *arr, int n) {
        int a[n+1]={0};
        for(int i=0;i<n;i++){
            a[*arr]++; arr++;
        }
        int m=0,p=0;
        for(int i=1;i<n+1;i++){
            if(a[i]==0 && m==0) {num[1]=i; m++;}
            if(a[i]>1) {num[0]=i; p++;}
        }
        
        return num;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends