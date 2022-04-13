// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    unordered_map<string,int> umap; int mod=1003;
    int boolParenthesization(string &str,int i,int j,bool isTrue){
        if(i>j) return 0;
        if(i==j){
            if(isTrue)
                return str[i]=='T';
            else return str[i]=='F';
        }
        string temp=to_string(i); 
        temp.push_back(' ');
        temp.append(to_string(j));
        temp.push_back(' ');
        temp.append(to_string(isTrue));
        
        int ans=0; 
        
        if(umap.find(temp)!=umap.end()) return umap[temp];
        
        for(int k=i+1;k<=j-1;k+=2){
            int lT,rT,lF,rF; 
            // string l1,l2,r1,r2;
            // l1=to_string(i); l1.push_back(' '); l1.append(to_string(k-1));
            // l1.push_back(' '); l1.append(to_string(true));
            
            // l2=to_string(i); l2.push_back(' '); l2.append(to_string(k-1));
            // l2.push_back(' '); l2.append(to_string(false));
            
            // r1=to_string(k+1); r1.push_back(' '); r1.append(to_string(j));
            // r1.push_back(' '); r1.append(to_string(true));
            
            // r2=to_string(k+1); r2.push_back(' '); r2.append(to_string(j));
            // r2.push_back(' '); r2.append(to_string(false));
            
            // if(umap[l1]) lT=umap[l1];
            // else 
            lT = boolParenthesization(str, i, k-1, true);
            // if(umap[l2]) lF=umap[l2];
            // else 
            lF = boolParenthesization(str, i, k-1, false);
            // if(umap[r1]) rT=umap[r1];
            // else 
            rT = boolParenthesization(str, k + 1, j, true);
            // if(umap[r2]) rF=umap[r2];
            // else 
            rF = boolParenthesization(str, k + 1, j, false);
            
            if(str[k]=='&'){
                if(isTrue) ans=ans+(lT*rT);
                else ans=ans+(lT*rF)+(lF*rT)+(lF*rF);
            }
            else if(str[k]=='|'){
                if(isTrue) ans=ans+(lT*rT)+(lT*rF)+(lF*rT);
                else ans=ans+(lF*rF);
            }
            else if(str[k]=='^'){
                if(isTrue) ans=ans+(lT*rF)+(lF*rT);
                else ans=ans+(lT*rT)+(lF*rF);
            }
        }
        return umap[temp]=ans%mod;
    }
    int countWays(int N, string S){
        umap.clear();
        return boolParenthesization(S,0,N-1,true)%mod;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends