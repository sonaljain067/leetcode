// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s){
        int i=0,j=0,n=s.length(); unordered_map<char,int> umap;
        for(int i=0;i<n;i++) {
            umap[s[i]]++;
            if(umap[s[j]]>1) j++;
        }
        while(umap[s[j]]>1) j++;
        return (j<n) ? s[j]:'$';       
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends