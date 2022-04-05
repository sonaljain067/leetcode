// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) { 
        stack<string> st; string str="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                st.push(str); str="";
            }
            else str+=S[i];
        }
        st.push(str); str="";
        int x=st.size();
        for(int i=0;i<x;i++){
            cout<<st.top(); st.pop();
            if(i!=x-1) cout<<'.';
        }
        return "";
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends