// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n){
        // Way: Optimized TC: O(nlogn),SC: O(1)
        sort(arr,arr+n, [](auto &a, auto &b){
            return a.value*b.weight > a.weight*b.value;
        });
        double value=0;
        for(int i=0;i<n;i++){
            auto &e=arr[i];
            if(e.weight<W){
                value+=e.value; W-=e.weight;
            }
            else{
                value+=double(e.value)*W/e.weight; break;
            }
        }
        return value;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends