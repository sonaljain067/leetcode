// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	   int x1=KnightPos[0];
	   int y1=KnightPos[1];
	    
	    int x2=TargetPos[0];
	    int y2=TargetPos[1];
	    
	    int arr[1001][1001];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            arr[i][j]=0;
	        }
	    }
	    if(x1==x2&&y1==y2) return 0;
	    queue<pair<int,int>> q;
	    q.push({x1-1,y1-1});
	    while(q.empty()==false)
	    {
	        auto curr=q.front();
	        int i=curr.first;
	        int j=curr.second;
	        q.pop();
	        
	        if((i+1)<n&&(i+1)>=0&&(j+2)<n&&(j+2)>=0&&arr[i+1][j+2]==0)
	        {
	            arr[i+1][j+2]=arr[i][j]+1;
	            q.push(make_pair(i+1,j+2));
	        }
	         if((i-1)>=0&&(j+2)<n&&(i-1)<n&&(j+2)>=0&&arr[i-1][j+2]==0)
	        {
	            arr[i-1][j+2]=arr[i][j]+1;
	            q.push(make_pair(i-1,j+2));
	        }
	        if((i-2)>=0&&(j+1)<n&&(i-2)<n&&(j+1)>=0&&arr[i-2][j+1]==0)
	        {
	            arr[i-2][j+1]=arr[i][j]+1;
	            q.push(make_pair(i-2,j+1));
	        }
	         if((i+2)<n&&(j+1)<n&&(i+2)>=0&&(j+1)>=0&&arr[i+2][j+1]==0)
	        {
	            arr[i+2][j+1]=arr[i][j]+1;
	            q.push(make_pair(i+2,j+1));
	        }
	          if((i-1)>=0&&(j-2)>=0&&(i-1)<n&&(j-2)<n&&arr[i-1][j-2]==0)
	        {
	            arr[i-1][j-2]=arr[i][j]+1;
	            q.push(make_pair(i-1,j-2));
	        }
	        if((i+1)<n&&(j-2)>=0&&(i+1)>=0&&(j-2)<n&&arr[i+1][j-2]==0)
	        {
	            arr[i+1][j-2]=arr[i][j]+1;
	            q.push(make_pair(i+1,j-2));
	        }
	       
	        if((i+2)<n&&(j-1)>=0&&(i+2)>=0&&(j-1)<n&&arr[i+2][j-1]==0)
	        {
	            arr[i+2][j-1]=arr[i][j]+1;
	            q.push(make_pair(i+2,j-1));
	        }
	       
	      
	        if((i-2)>=0&&(j-1)>=0&&(i-2)<n&&(j-1)<n&&arr[i-2][j-1]==0)
	        {
	            arr[i-2][j-1]=arr[i][j]+1;
	            q.push(make_pair(i-2,j-1));
	        }
	        
	    }
	    return arr[x2-1][y2-1];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends