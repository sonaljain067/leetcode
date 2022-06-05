// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    // bool static comp(Job a, Job b){
    //     return a.profit > b.profit;
    // }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        //Way1: Using vector TC: O(n^2), SC: O(n)
        // int jobs=0,ans=0; vector<int> timing(101,0);
        // sort(arr,arr+n,comp);
        // for(int i=0;i<n;i++){
        //     for(int j=arr[i].dead;j>=1;j--){
        //         if(timing[j]==0){
        //             ans+=arr[i].profit; timing[j]=1;
        //             jobs++; break;
        //         }
        //     }
        // }
        // return {jobs,ans};
        
        //Way2: Priority Queue TC: O(nlogn), SC: O(n)
        sort(arr,arr+n,[](auto &a,auto &b){
            return a.dead<b.dead || a.dead==b.dead && a.profit>b.profit;
        });
        
        priority_queue<int,vector<int>,greater<int>> pq; int profit=0;
        for(int i=0;i<n;i++){
            auto &job=arr[i];
        
            if(pq.size()<job.dead){
                profit+=job.profit; pq.push(job.profit);
            }
            else if(job.profit-pq.top()>0){
                profit+=job.profit-pq.top();
                pq.pop(); pq.push(job.profit);
            }
        }
        return {pq.size(),profit};
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends