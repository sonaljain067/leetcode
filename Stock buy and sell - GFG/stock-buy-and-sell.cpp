// { Driver Code Starts

// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    vector<vector<int>> vec; 
    for(int i=1;i<n;i++){
        vector<int> temp;
        if(price[i-1]<price[i]){
            temp.push_back(i-1); i++;
        
            while(i<n){
                if(price[i-1]<=price[i]) i++;
                else break;
            }
            temp.push_back(i-1); vec.push_back(temp);
        }
    }
    if(vec.empty()) { 
        cout<<"No Profit\n"; return;
    }
    for(auto i: vec)
        cout<<"("<<i[0]<<" "<<i[1]<<") ";
      cout<<"\n";
}