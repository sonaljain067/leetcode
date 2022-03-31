// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int minEnergy(int a[], int n)
    {
        int sum=0,minEn=0; bool isNeg=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum<=0){ 
                minEn+=abs(sum)+1;
                sum=1; 
                isNeg=1;
            }
        }
        return (isNeg==0) ? 1 : minEn;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<< ob.minEnergy(a,n) <<endl;
	}
	return 0;
}  // } Driver Code Ends